/*
 * XREFs of PerfLogImageUnload @ 0x140452774
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1404524D0 (EtwpEnumerateAddressSpace.c)
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1400AE16C (EtwTraceSiloKernelEvent.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     FsRtlGetFileNameInformation @ 0x1404D2F40 (FsRtlGetFileNameInformation.c)
 *     FsRtlReleaseFileNameInformation @ 0x140595310 (FsRtlReleaseFileNameInformation.c)
 *     EtwpPsProvTraceImage @ 0x140746F28 (EtwpPsProvTraceImage.c)
 */

void __fastcall PerfLogImageUnload(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        char a8,
        unsigned int a9)
{
  int v12; // ecx
  PIMAGE_NT_HEADERS v13; // rax
  unsigned int v14; // ecx
  int FileNameInformation; // eax
  unsigned __int16 *v16; // rcx
  _QWORD v17[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v18[24]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-A8h] BYREF
  int v20; // [rsp+70h] [rbp-98h]
  unsigned int CheckSum; // [rsp+74h] [rbp-94h]
  unsigned int TimeDateStamp; // [rsp+78h] [rbp-90h]
  char v23; // [rsp+7Ch] [rbp-8Ch]
  char v24; // [rsp+7Dh] [rbp-8Bh]
  __int16 v25; // [rsp+7Eh] [rbp-8Ah]
  unsigned __int64 ImageBase; // [rsp+80h] [rbp-88h]
  __int64 v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  _QWORD v29[3]; // [rsp+A0h] [rbp-68h] BYREF
  int v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+BCh] [rbp-4Ch]
  void *v32; // [rsp+C0h] [rbp-48h]
  __int64 v33; // [rsp+C8h] [rbp-40h]

  v17[1] = a3;
  v17[0] = 0LL;
  if ( a2 )
  {
    FileNameInformation = FsRtlGetFileNameInformation(a2, 512LL, v18, v17);
    v16 = (unsigned __int16 *)v18;
    if ( FileNameInformation < 0 )
      v16 = a1;
    a1 = v16;
  }
  if ( a1 && *a1 && *((_QWORD *)a1 + 1) )
  {
    if ( a3 )
      v12 = *(_DWORD *)(a3 + 736);
    else
      v12 = 0;
    v20 = v12;
    v19[0] = a4;
    v19[1] = a5;
    CheckSum = a6;
    v25 = 0;
    v27 = 0LL;
    v28 = 0LL;
    TimeDateStamp = 0;
    ImageBase = 0LL;
    v23 = a7;
    v24 = a8;
    if ( v12 )
    {
      v13 = RtlImageNtHeader(a4);
      if ( v13 )
      {
        CheckSum = v13->OptionalHeader.CheckSum;
        TimeDateStamp = v13->FileHeader.TimeDateStamp;
        ImageBase = v13->OptionalHeader.ImageBase;
      }
    }
    if ( EtwpHostSiloState != -4464 && (*(_DWORD *)(EtwpHostSiloState + 4464) & 4) != 0 )
      EtwpPsProvTraceImage(a1, v19, 5122LL, a9);
    v29[0] = v19;
    v29[1] = 56LL;
    v29[2] = *((_QWORD *)a1 + 1);
    v30 = *a1;
    v31 = 0;
    v32 = &EtwpNull;
    v33 = 2LL;
    v14 = a9 != 0 ? 20977923 : 4200707;
    if ( a3 )
      EtwTraceSiloKernelEvent(*(_QWORD *)(a3 + 1728), (__int64)v29, 3u, 4u, 0x1402u, v14);
    else
      EtwTraceKernelEvent((__int64)v29, 3u, 4u, 0x1402u, v14);
  }
  if ( v17[0] )
    FsRtlReleaseFileNameInformation();
}
