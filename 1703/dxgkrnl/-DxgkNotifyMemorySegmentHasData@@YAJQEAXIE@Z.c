/*
 * XREFs of ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C0023420
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C0005CE4 (-DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z.c)
 */

__int64 __fastcall DxgkNotifyMemorySegmentHasData(_QWORD *a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  DXGADAPTER *v5; // rcx
  unsigned int v6; // edx
  unsigned int *v7; // rdi
  unsigned int v8; // eax

  v3 = 0;
  v4 = a2;
  v5 = *(DXGADAPTER **)(a1[8] + 3704LL);
  if ( *((_QWORD *)v5 + 291) )
  {
    v6 = 0;
    v7 = (unsigned int *)(*((_QWORD *)v5 + 290) + 520 * v4);
    if ( v7[2] > 1 )
    {
      if ( a3 )
      {
        if ( v7[86] )
        {
          v8 = DXGADAPTER::DdiSetPowerComponentFState(v5, v7[1], 0LL, v4);
          v7[86] = 0;
          return v8;
        }
      }
      else if ( !v7[86] )
      {
        v8 = DXGADAPTER::DdiSetPowerComponentFState(v5, v7[1], 1LL, v4);
        v7[86] = 1;
        return v8;
      }
    }
    return v6;
  }
  return v3;
}
