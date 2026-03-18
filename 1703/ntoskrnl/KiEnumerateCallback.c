/*
 * XREFs of KiEnumerateCallback @ 0x14003C7A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 */

__int64 __fastcall KiEnumerateCallback(int a1, struct _EX_RUNDOWN_REF **a2, unsigned __int8 *a3, unsigned __int64 *a4)
{
  struct _EX_RUNDOWN_REF *v6; // r8
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF *v9; // rcx
  PVOID *Count; // rdx
  unsigned __int8 CurrentIrql; // al
  signed __int64 v12; // rax
  signed __int64 v13; // rtt

  if ( a1 )
  {
    if ( a1 != 1 )
      return 0LL;
    v6 = *a2;
    if ( *a2 )
    {
      _m_prefetchw(&KiBoundsCallback);
      v12 = KiBoundsCallback;
      if ( ((unsigned __int64)v6 ^ KiBoundsCallback) >= 0xF )
      {
LABEL_14:
        ExReleaseRundownProtection(v6);
      }
      else
      {
        while ( 1 )
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange64(&KiBoundsCallback, v12 + 1, v12);
          if ( v13 == v12 )
            break;
          if ( ((unsigned __int64)v6 ^ v12) >= 0xF )
            goto LABEL_14;
        }
      }
      *a2 = 0LL;
      return 0LL;
    }
    v7 = ExReferenceCallBackBlock(&KiBoundsCallback);
    if ( !v7 )
      return 0LL;
    *a2 = (struct _EX_RUNDOWN_REF *)v7;
    *a4 = *(_QWORD *)(v7 + 8);
  }
  else
  {
    v9 = *a2;
    Count = &KiNmiCallbackListHead;
    if ( v9 == (struct _EX_RUNDOWN_REF *)&KiNmiCallbackListHead
      || !v9
      && (CurrentIrql = KeGetCurrentIrql(),
          __writecr8(2uLL),
          *a3 = CurrentIrql,
          (v9 = (struct _EX_RUNDOWN_REF *)KiNmiCallbackListHead) == 0LL) )
    {
      __writecr8(*a3);
      return 0LL;
    }
    *a4 = v9[1].Count;
    if ( v9->Count )
      Count = (PVOID *)v9->Count;
    *a2 = (struct _EX_RUNDOWN_REF *)Count;
  }
  return 1LL;
}
