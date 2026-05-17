/*
 * XREFs of sub_18000B7EC @ 0x18000B7EC
 * Callers:
 *     CsrClientConnectToServer @ 0x18000B620 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwOpenSection @ 0x1800A59E0 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     ZwConnectPort @ 0x1800A6670 (ZwConnectPort.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18000B7EC(_WORD *Src, int a2, __int64 *a3, int a4, _DWORD *a5)
{
  __int64 v9; // rax
  size_t v10; // rsi
  unsigned __int64 v11; // r8
  char *Heap; // rax
  char *v13; // rbx
  char *v14; // rbx
  _WORD *v15; // rbx
  int v16; // edi
  int v17; // ebx
  __int64 v18; // rcx
  struct _PEB *v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  char *v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  char v28[8]; // [rsp+80h] [rbp-80h] BYREF
  int v29; // [rsp+88h] [rbp-78h] BYREF
  __int64 v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  __int64 v32; // [rsp+A0h] [rbp-60h]
  __int128 v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-28h]
  __int16 *v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+E8h] [rbp-18h]
  __int128 v41; // [rsp+F0h] [rbp-10h]
  _QWORD v42[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  _QWORD v45[12]; // [rsp+130h] [rbp+30h] BYREF
  char v46[4]; // [rsp+190h] [rbp+90h] BYREF
  int v47; // [rsp+194h] [rbp+94h]
  __int16 v48; // [rsp+198h] [rbp+98h]

  if ( !Src )
    return 3221225485LL;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  v10 = 2 * v9;
  v11 = 2 * v9 + 28;
  if ( v11 > 0xFFFF )
    return 3221225734LL;
  word_18015BA62 = 2 * v9 + 28;
  Heap = (char *)RtlAllocateHeap(qword_18015BAA0, (unsigned int)dword_18015B268, v11);
  qword_18015BA68 = (__int64)Heap;
  v13 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memmove(Heap, Src, v10);
  v14 = &v13[v10];
  *(_WORD *)v14 = 92;
  v15 = v14 + 2;
  *(_OWORD *)v15 = xmmword_180114668;
  *((_QWORD *)v15 + 2) = 0x6F006900740063LL;
  v15[12] = 110;
  v37 = 48;
  word_18015BA60 = (_WORD)v15 - qword_18015BA68 + 26;
  v39 = &word_18015BA60;
  v38 = 0LL;
  v40 = 64;
  v41 = 0LL;
  v16 = ZwOpenSection(&v22, 4LL, &v37);
  if ( v16 < 0 )
  {
    RtlFreeHeap(qword_18015BAA0, 0LL);
    return (unsigned int)v16;
  }
  *(_QWORD *)v15 = 0x50006900700041LL;
  *((_DWORD *)v15 + 2) = 7471215;
  v15[6] = 116;
  word_18015BA60 = (_WORD)v15 - qword_18015BA68 + 14;
  v47 = 2;
  v48 = 257;
  v24 = 0x10000LL;
  v17 = ZwCreateSection(&v26, 983071LL, 0LL, &v24, 4, 0x8000000, 0LL);
  if ( v17 < 0 )
    goto LABEL_23;
  v30 = v26;
  v32 = (unsigned int)v24;
  v29 = 48;
  v31 = 0;
  v34 = 24;
  v35 = 0LL;
  v36 = 0LL;
  v23 = 48;
  v33 = 0LL;
  if ( a4 != 8 )
    goto LABEL_19;
  if ( a2 == 1 )
  {
    v44 = *a3;
    v43 = 1LL;
  }
  else
  {
LABEL_19:
    HIDWORD(v43) = -1073741811;
  }
  v17 = ZwConnectPort(&qword_18015BA88, &word_18015BA60, v46, &v29, &v34, v28, v42, &v23);
  ZwClose(v26);
  if ( v17 < 0 )
  {
LABEL_23:
    v21 = v22;
  }
  else
  {
    v18 = v22;
    *a5 = HIDWORD(v43);
    v25 = 0LL;
    v27 = 0LL;
    v17 = ZwMapViewOfSection(v18, -1LL, &v25, 0LL, 0LL, 0LL, &v27, 2, 5242880, 2);
    ZwClose(v22);
    v22 = 0LL;
    if ( v17 >= 0 )
    {
      v19 = NtCurrentPeb();
      *(_QWORD *)&v19[1].InheritedAddressSpace = v42[0];
      v19->ReadOnlySharedMemoryBase = v25;
      v19->ReadOnlyStaticServerData = (void **)&v25[v42[1] - v42[0]];
      qword_18015BA78 = v27;
      qword_18015BA70 = v42[2];
      qword_18015BA80 = *((_QWORD *)&v33 + 1) - v33;
      memset(v45, 0, sizeof(v45));
      v45[9] = WinSqmStartSqmOptinListener;
      LODWORD(v45[0]) = 96;
      v45[7] = 4096LL;
      v45[8] = v32;
      qword_18015BA90 = RtlCreateHeap(0x8000LL, v33, v32, 1LL, 0LL, v45);
      if ( qword_18015BA90 )
      {
        dword_18015BA98 = 0;
        return 0LL;
      }
      v17 = -1073741801;
    }
    ZwClose(qword_18015BA88);
    v21 = v22;
    qword_18015BA88 = 0LL;
    if ( !v22 )
      goto LABEL_25;
  }
  ZwClose(v21);
LABEL_25:
  RtlFreeHeap(qword_18015BAA0, 0LL);
  return (unsigned int)v17;
}
