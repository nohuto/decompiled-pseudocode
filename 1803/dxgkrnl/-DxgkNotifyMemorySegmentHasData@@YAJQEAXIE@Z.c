/*
 * XREFs of ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C0028D40
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C002AA84 (-DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z.c)
 */

__int64 __fastcall DxgkNotifyMemorySegmentHasData(_QWORD *a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  DXGADAPTER *v5; // rcx
  unsigned int v6; // edx
  unsigned int *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // eax

  v3 = 0;
  v4 = a2;
  v5 = *(DXGADAPTER **)(a1[8] + 3728LL);
  if ( *((_QWORD *)v5 + 313) )
  {
    v6 = 0;
    v7 = (unsigned int *)(*((_QWORD *)v5 + 312) + 520 * v4);
    if ( v7[2] > 1 )
    {
      v8 = v7[86];
      if ( a3 )
      {
        if ( v8 )
        {
          v9 = DXGADAPTER::DdiSetPowerComponentFState(v5, v7[1], 0);
          v7[86] = 0;
          return v9;
        }
      }
      else if ( !v8 )
      {
        v9 = DXGADAPTER::DdiSetPowerComponentFState(v5, v7[1], 1u);
        v7[86] = 1;
        return v9;
      }
    }
    return v6;
  }
  return v3;
}
