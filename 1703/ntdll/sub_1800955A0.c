/*
 * XREFs of sub_1800955A0 @ 0x1800955A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCommitDebugInfo_0 @ 0x1800682D4 (RtlCommitDebugInfo_0.c)
 *     sub_18008AD6C @ 0x18008AD6C (sub_18008AD6C.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800955A0(__int64 a1, _RTL_DEBUG_INFORMATION *a2)
{
  _DWORD *Heaps; // rsi
  PVOID v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx

  Heaps = a2->Heaps;
  v4 = RtlCommitDebugInfo_0(a2, 0x58uLL);
  v5 = (__int64)v4;
  if ( !v4 )
    return 3221225495LL;
  memset(v4, 0, 0x58uLL);
  result = sub_18008AD6C(a1, v5);
  if ( (int)result >= 0 )
  {
    ++*Heaps;
  }
  else
  {
    *(_QWORD *)v5 = a1;
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(a1 + 112);
    *(_WORD *)(v5 + 12) = 16;
    *(_WORD *)(v5 + 14) = *(_WORD *)(a1 + 304);
    v7 = *(__int64 **)(a1 + 288);
    if ( v7 != (__int64 *)(a1 + 288) )
    {
      v8 = *(_QWORD *)(v5 + 24);
      do
      {
        v8 += (unsigned int)((*((_DWORD *)v7 + 8) - *((_DWORD *)v7 + 14)) << 12);
        *(_QWORD *)(v5 + 24) = v8;
        v7 = (__int64 *)*v7;
      }
      while ( v7 != (__int64 *)(a1 + 288) );
    }
    if ( *(_DWORD *)(a1 + 16) == -571548178
      || (*(_BYTE *)(a1 + 386) != 2 ? (v10 = 0LL) : (v10 = *(_QWORD *)(a1 + 376)), !v10) )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(v10 + 40) - v10;
    }
    *(_QWORD *)(v5 + 24) += v9;
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(v5 + 24) - 16LL * *(_QWORD *)(a1 + 192);
    ++*Heaps;
    return 0LL;
  }
  return result;
}
