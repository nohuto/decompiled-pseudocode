/*
 * XREFs of sub_18005996C @ 0x18005996C
 * Callers:
 *     CsrClientConnectToServer @ 0x1800597A0 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwOpenSection @ 0x18009B1A0 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     ZwConnectPort @ 0x18009BE70 (ZwConnectPort.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_18005996C(_WORD *Src, int a2, __int64 *a3, int a4, _DWORD *a5)
{
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  char *Heap; // rax
  char *v12; // rdi
  size_t v13; // rbx
  char *v14; // rbx
  int v15; // edi
  int v16; // ebx
  __int64 v17; // rcx
  struct _PEB *v18; // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  char *v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+78h] [rbp-88h] BYREF
  char v27[8]; // [rsp+80h] [rbp-80h] BYREF
  int v28; // [rsp+88h] [rbp-78h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  __int128 v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-28h]
  __int16 *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  __int128 v40; // [rsp+F0h] [rbp-10h]
  _QWORD v41[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  _QWORD v44[12]; // [rsp+130h] [rbp+30h] BYREF
  char v45[4]; // [rsp+190h] [rbp+90h] BYREF
  int v46; // [rsp+194h] [rbp+94h]
  __int16 v47; // [rsp+198h] [rbp+98h]

  if ( !Src )
    return 3221225485LL;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  v10 = 2 * v9 + 28;
  if ( v10 > 0xFFFF )
    return 3221225734LL;
  word_18015CAC2 = 2 * v9 + 28;
  Heap = (char *)RtlAllocateHeap(qword_18015CB00, dword_18015C294, v10);
  qword_18015CAC8 = (__int64)Heap;
  v12 = Heap;
  if ( !Heap )
    return 3221225495LL;
  v13 = 2 * v9;
  memmove(Heap, Src, v13);
  *(_WORD *)&v12[v13] = 92;
  v14 = &v12[v13 + 2];
  *(_OWORD *)v14 = xmmword_180114E38;
  *((_QWORD *)v14 + 2) = 0x6F006900740063LL;
  *((_WORD *)v14 + 12) = 110;
  v36 = 48;
  word_18015CAC0 = (_WORD)v14 - qword_18015CAC8 + 26;
  v38 = &word_18015CAC0;
  v37 = 0LL;
  v39 = 64;
  v40 = 0LL;
  v15 = ZwOpenSection(&v21, 4LL, &v36);
  if ( v15 < 0 )
  {
    RtlFreeHeap(qword_18015CB00, 0, qword_18015CAC8);
    return (unsigned int)v15;
  }
  *(_QWORD *)v14 = 0x50006900700041LL;
  *((_DWORD *)v14 + 2) = 7471215;
  *((_WORD *)v14 + 6) = 116;
  word_18015CAC0 = (_WORD)v14 - qword_18015CAC8 + 14;
  v46 = 2;
  v47 = 257;
  v23 = 0x10000LL;
  v16 = ZwCreateSection(&v25, 983071LL, 0LL, &v23, 4, 0x8000000, 0LL);
  if ( v16 < 0 )
    goto LABEL_23;
  v29 = v25;
  v31 = (unsigned int)v23;
  v28 = 48;
  v30 = 0;
  v33 = 24;
  v34 = 0LL;
  v35 = 0LL;
  v22 = 48;
  v32 = 0LL;
  if ( a4 != 8 )
    goto LABEL_19;
  if ( a2 == 1 )
  {
    v43 = *a3;
    v42 = 1LL;
  }
  else
  {
LABEL_19:
    HIDWORD(v42) = -1073741811;
  }
  v16 = ZwConnectPort(&qword_18015CAE8, &word_18015CAC0, v45, &v28, &v33, v27, v41, &v22);
  ZwClose(v25);
  if ( v16 < 0 )
  {
LABEL_23:
    v20 = v21;
  }
  else
  {
    v17 = v21;
    *a5 = HIDWORD(v42);
    v24 = 0LL;
    v26 = 0LL;
    v16 = ZwMapViewOfSection(v17, -1LL, &v24, 0LL, 0LL, 0LL, &v26, 2, 5242880, 2);
    ZwClose(v21);
    v21 = 0LL;
    if ( v16 >= 0 )
    {
      v18 = NtCurrentPeb();
      *(_QWORD *)&v18[1].InheritedAddressSpace = v41[0];
      v18->ReadOnlySharedMemoryBase = v24;
      v18->ReadOnlyStaticServerData = (void **)&v24[v41[1] - v41[0]];
      qword_18015CAD8 = v26;
      qword_18015CAD0 = v41[2];
      qword_18015CAE0 = *((_QWORD *)&v32 + 1) - v32;
      memset(v44, 0, sizeof(v44));
      v44[9] = WinSqmStartSqmOptinListener;
      LODWORD(v44[0]) = 96;
      v44[7] = 4096LL;
      v44[8] = v31;
      qword_18015CAF0 = RtlCreateHeap(0x8000LL, v32, v31, 1LL, 0LL, v44);
      if ( qword_18015CAF0 )
      {
        dword_18015CAF8 = 0;
        return 0LL;
      }
      v16 = -1073741801;
    }
    ZwClose(qword_18015CAE8);
    v20 = v21;
    qword_18015CAE8 = 0LL;
    if ( !v21 )
      goto LABEL_25;
  }
  ZwClose(v20);
LABEL_25:
  RtlFreeHeap(qword_18015CB00, 0, qword_18015CAC8);
  return (unsigned int)v16;
}
