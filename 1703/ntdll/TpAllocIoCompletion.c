/*
 * XREFs of TpAllocIoCompletion @ 0x180010340
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800102BC @ 0x1800102BC (sub_1800102BC.c)
 *     sub_180013D14 @ 0x180013D14 (sub_180013D14.c)
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     sub_180017B34 @ 0x180017B34 (sub_180017B34.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall TpAllocIoCompletion(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v9; // edi
  __int64 Heap; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  _BYTE *v14; // r14
  _DWORD *v15; // r15
  int v17; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( a1 && a2 && a3 && (v9 & 0xFFFFFFFC) == 0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    *a1 = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 0x40000) | 8u, 288LL);
    v11 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v12 = sub_180017B34(Heap, a4, a5, v9, (__int64)off_180110210);
      v17 = v12;
      if ( v12 >= 0 )
      {
        *(_QWORD *)(v11 + 80) = a3;
        *(_QWORD *)(v11 + 272) = a2;
        *(_DWORD *)(v11 + 280) = 0;
        v13 = *(_QWORD *)(v11 + 144);
        *(_QWORD *)(v11 + 256) = sub_180016810;
        v14 = (_BYTE *)(v11 + 268);
        v15 = (_DWORD *)(v11 + 264);
        if ( v13 )
        {
          sub_180017A78(v13, v11 + 264, v11 + 268);
        }
        else
        {
          *v15 = 0;
          *v14 = 0;
        }
        *(_QWORD *)(v11 + 232) = 0LL;
        *(_QWORD *)(v11 + 248) = v11 + 240;
        *(_QWORD *)(v11 + 240) = v11 + 240;
        *(_QWORD *)(v11 + 200) = off_1801101B0;
        *(_DWORD *)(v11 + 208) = *v15;
        *(_BYTE *)(v11 + 212) = *v14;
        v12 = sub_1800102BC(a2, v11 + 200, *(_QWORD *)(v11 + 144));
        v17 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v17 = 0;
          if ( a5 )
            *(_QWORD *)(v11 + 32) = *(_QWORD *)(a5 + 48);
          if ( *(_QWORD *)(v11 + 16) )
            sub_180013D14(v11);
        }
        if ( v12 < 0 )
          sub_1800186FC(v11);
      }
    }
    else
    {
      v12 = -1073741801;
      v17 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_23;
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_18015C000 + 0x40000));
      v11 = 0LL;
      v12 = v17;
    }
    if ( v12 >= 0 )
LABEL_23:
      *a1 = v11;
    return (unsigned int)v12;
  }
  else
  {
    sub_1801058B8();
    return 3221225485LL;
  }
}
