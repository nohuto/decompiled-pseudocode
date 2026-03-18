/*
 * XREFs of EtwpTraceImageUnload @ 0x14003E620
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1404B4AE4 (EtwpEnumerateAddressSpace.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     EtwTraceSiloKernelEvent @ 0x14003EF90 (EtwTraceSiloKernelEvent.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     FsRtlGetFileNameInformation @ 0x1404B6AA0 (FsRtlGetFileNameInformation.c)
 *     EtwpPsProvTraceImage @ 0x1404B7A1C (EtwpPsProvTraceImage.c)
 *     FsRtlReleaseFileNameInformation @ 0x14057B7A0 (FsRtlReleaseFileNameInformation.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x1407B89DC (EtwpCoverageSamplerUnloadImage.c)
 */

void __fastcall EtwpTraceImageUnload(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        char a8,
        unsigned int a9,
        int a10)
{
  int v14; // ecx
  PIMAGE_NT_HEADERS v15; // rax
  int v16; // ecx
  int FileNameInformation; // eax
  unsigned __int16 *v18; // rcx
  _QWORD v19[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v20[24]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-A8h] BYREF
  int v22; // [rsp+70h] [rbp-98h]
  unsigned int CheckSum; // [rsp+74h] [rbp-94h]
  unsigned int TimeDateStamp; // [rsp+78h] [rbp-90h]
  char v25; // [rsp+7Ch] [rbp-8Ch]
  char v26; // [rsp+7Dh] [rbp-8Bh]
  __int16 v27; // [rsp+7Eh] [rbp-8Ah]
  unsigned __int64 ImageBase; // [rsp+80h] [rbp-88h]
  __int64 v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  _QWORD v31[3]; // [rsp+A0h] [rbp-68h] BYREF
  int v32; // [rsp+B8h] [rbp-50h]
  int v33; // [rsp+BCh] [rbp-4Ch]
  void *v34; // [rsp+C0h] [rbp-48h]
  __int64 v35; // [rsp+C8h] [rbp-40h]

  v19[1] = a3;
  if ( !a10 && EtwpHostSiloState != -4512 && (*(_DWORD *)(EtwpHostSiloState + 4512) & 4) != 0 )
    EtwpCoverageSamplerUnloadImage(a3, a4, a5);
  v19[0] = 0LL;
  if ( a2 )
  {
    FileNameInformation = FsRtlGetFileNameInformation(a2, 512LL, v20, v19);
    v18 = (unsigned __int16 *)v20;
    if ( FileNameInformation < 0 )
      v18 = a1;
    a1 = v18;
  }
  if ( a1 && *a1 && *((_QWORD *)a1 + 1) )
  {
    if ( a3 )
      v14 = *(_DWORD *)(a3 + 736);
    else
      v14 = 0;
    v22 = v14;
    v21[0] = a4;
    v21[1] = a5;
    CheckSum = a6;
    v27 = 0;
    v29 = 0LL;
    v30 = 0LL;
    TimeDateStamp = 0;
    ImageBase = 0LL;
    v25 = a7;
    v26 = a8;
    if ( v14 )
    {
      v15 = RtlImageNtHeader(a4);
      if ( v15 )
      {
        CheckSum = v15->OptionalHeader.CheckSum;
        TimeDateStamp = v15->FileHeader.TimeDateStamp;
        ImageBase = v15->OptionalHeader.ImageBase;
      }
    }
    if ( EtwpHostSiloState != -4480 && (*(_DWORD *)(EtwpHostSiloState + 4480) & 4) != 0 )
      EtwpPsProvTraceImage(a1, v21, 5122LL, a9);
    v31[0] = v21;
    v31[1] = 56LL;
    v31[2] = *((_QWORD *)a1 + 1);
    v32 = *a1;
    v33 = 0;
    v34 = &EtwpNull;
    v35 = 2LL;
    v16 = a9 != 0 ? 20977923 : 4200707;
    if ( a3 )
      EtwTraceSiloKernelEvent(*(_QWORD *)(a3 + 1728), (unsigned int)v31, 3, 4, 5122, v16);
    else
      EtwTraceKernelEvent((unsigned int)v31, 3, 4, 5122, v16);
  }
  if ( v19[0] )
    FsRtlReleaseFileNameInformation();
}
