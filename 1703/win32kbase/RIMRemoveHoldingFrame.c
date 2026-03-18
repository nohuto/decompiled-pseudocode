/*
 * XREFs of RIMRemoveHoldingFrame @ 0x1C00950C8
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C008CB80 (RIMIDEAdoptOrphanedRimDevs.c)
 *     RIMFreeSpecificDev @ 0x1C0094300 (RIMFreeSpecificDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     rimFindHoldingFrame @ 0x1C0095120 (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C010ECB8 (rimReclaimHoldingFrame.c)
 */

__int64 __fastcall RIMRemoveHoldingFrame(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  v4 = 1;
  do
  {
    result = rimFindHoldingFrame(a1, a2);
    v8 = (_QWORD *)result;
    if ( result )
    {
      rimReclaimHoldingFrame(v7, v6, result);
      v9 = *v8;
      v10 = (_QWORD *)v8[1];
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v10 != v8 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      result = Win32FreePool((__int64)v8);
    }
    else
    {
      v4 = 0;
    }
  }
  while ( v4 );
  return result;
}
