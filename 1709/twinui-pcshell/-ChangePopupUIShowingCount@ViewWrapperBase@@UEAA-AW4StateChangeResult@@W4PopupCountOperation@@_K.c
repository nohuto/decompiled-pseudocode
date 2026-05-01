/*
 * XREFs of ?ChangePopupUIShowingCount@ViewWrapperBase@@UEAA?AW4StateChangeResult@@W4PopupCountOperation@@_K@Z @ 0x18013F0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::ChangePopupUIShowingCount(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdx
  unsigned __int64 v5; // rax

  v3 = 0;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 288);
    if ( v5 <= a3 )
    {
      *(_QWORD *)(a1 + 288) = 0LL;
      LOBYTE(v3) = v5 != 0;
    }
    else
    {
      *(_QWORD *)(a1 + 288) = v5 - a3;
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 288);
    LOBYTE(v3) = v4 == 0;
    *(_QWORD *)(a1 + 288) = v4 + a3;
  }
  return v3;
}
