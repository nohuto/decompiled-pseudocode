/*
 * XREFs of ?GetTransform@CBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D0F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBitmapRealization::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  float v5; // xmm1_4
  int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  *(_WORD *)(a2 + 64) = 32085;
  *(_OWORD *)a2 = _xmm;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  if ( a3 )
  {
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)a1 + 32LL))(a1, &v7, &v8);
    v4 = v7;
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
    v5 = (float)v8;
    *(float *)(a3 + 8) = (float)v4;
    *(float *)(a3 + 12) = v5;
  }
  return 0;
}
