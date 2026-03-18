/*
 * XREFs of PerfLogImageUnload @ 0x1404F9690
 * Callers:
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     EtwpEnumerateAddressSpace @ 0x1404FA9C0 (EtwpEnumerateAddressSpace.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     FsRtlGetFileNameInformation @ 0x1404FAD10 (FsRtlGetFileNameInformation.c)
 *     EtwpPsProvTraceImage @ 0x140594E68 (EtwpPsProvTraceImage.c)
 */

void *__fastcall PerfLogImageUnload(
        unsigned __int16 *a1,
        void *a2,
        int a3,
        void *a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        char a8,
        unsigned int a9)
{
  void *result; // rax
  unsigned __int16 *v12; // rdi
  __int64 v13; // rcx
  PIMAGE_NT_HEADERS v14; // rax
  unsigned __int16 *v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int16 *v17; // [rsp+38h] [rbp-C0h]
  _BYTE v18[16]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-A8h] BYREF
  int v20; // [rsp+60h] [rbp-98h]
  unsigned int CheckSum; // [rsp+64h] [rbp-94h]
  unsigned int TimeDateStamp; // [rsp+68h] [rbp-90h]
  char v23; // [rsp+6Ch] [rbp-8Ch]
  char v24; // [rsp+6Dh] [rbp-8Bh]
  __int16 v25; // [rsp+6Eh] [rbp-8Ah]
  unsigned __int64 ImageBase; // [rsp+70h] [rbp-88h]
  __int64 v27; // [rsp+78h] [rbp-80h]
  __int64 v28; // [rsp+80h] [rbp-78h]
  _QWORD v29[3]; // [rsp+90h] [rbp-68h] BYREF
  int v30; // [rsp+A8h] [rbp-50h]
  int v31; // [rsp+ACh] [rbp-4Ch]
  void *v32; // [rsp+B0h] [rbp-48h]
  __int64 v33; // [rsp+B8h] [rbp-40h]

  result = a2;
  v12 = a1;
  v17 = a1;
  v13 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    result = (void *)FsRtlGetFileNameInformation(a2, 512LL, v18, &v16);
    v15 = (unsigned __int16 *)v18;
    if ( (int)result < 0 )
      v15 = v12;
    v12 = v15;
    v17 = v15;
    v13 = v16;
  }
  if ( v12 && *v12 && *((_QWORD *)v12 + 1) )
  {
    v20 = a3;
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
    if ( a3 )
    {
      v14 = RtlImageNtHeader(a4);
      if ( v14 )
      {
        CheckSum = v14->OptionalHeader.CheckSum;
        TimeDateStamp = v14->FileHeader.TimeDateStamp;
        ImageBase = v14->OptionalHeader.ImageBase;
      }
    }
    if ( (dword_140345000 & 4) != 0 )
      EtwpPsProvTraceImage(v12, v19, 5122LL, a9);
    v29[0] = v19;
    v29[1] = 56LL;
    v29[2] = *((_QWORD *)v12 + 1);
    v30 = *v12;
    v31 = 0;
    v32 = &EtwpNull;
    v33 = 2LL;
    result = EtwTraceKernelEvent((int)v29, 3, 4u, 5122, a9 != 0 ? 20977923 : 4200707);
    v13 = v16;
  }
  if ( v13 )
    return (void *)(*(__int64 (**)(void))(FltMgrCallbacks + 24))();
  return result;
}
