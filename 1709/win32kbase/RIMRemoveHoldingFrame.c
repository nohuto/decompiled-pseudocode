/*
 * XREFs of RIMRemoveHoldingFrame @ 0x1C000B4D4
 * Callers:
 *     RIMFreeSpecificDev @ 0x1C000C69C (RIMFreeSpecificDev.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C009382C (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C001B01C (rimFindHoldingFrame.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     rimReclaimHoldingFrame @ 0x1C010DC08 (rimReclaimHoldingFrame.c)
 */

__int64 __fastcall RIMRemoveHoldingFrame(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v4 = 1;
  do
  {
    result = rimFindHoldingFrame(a1, a2);
    v8 = (_QWORD *)result;
    if ( result )
    {
      rimReclaimHoldingFrame(v7, v6, result);
      v11 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v12 = (_QWORD *)v8[1], (_QWORD *)*v12 != v8) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      result = Win32FreePool(v8, v9, v10);
    }
    else
    {
      v4 = 0;
    }
  }
  while ( v4 );
  return result;
}
