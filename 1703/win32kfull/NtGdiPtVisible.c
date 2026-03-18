/*
 * XREFs of NtGdiPtVisible @ 0x1C027DF10
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009556C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 */

__int64 __fastcall NtGdiPtVisible(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  struct REGION *v9; // [rsp+20h] [rbp-39h] BYREF
  DC *v10[2]; // [rsp+28h] [rbp-31h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v12[32]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  struct _POINTL v15; // [rsp+D8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v5 = 0;
  if ( v10[0] )
  {
    v6 = 1;
    v13 = 0LL;
    v14 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v12, (struct XDCOBJ *)v10, 1);
    if ( (v12[24] & 1) != 0 )
    {
      v9 = XDCOBJ::prgnEffRao(v10);
      v15.x = a2;
      v15.y = a3;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v10, -2147483132);
      EXFORMOBJ::bXform((EXFORMOBJ *)v11, &v15, 1LL);
      v7 = (*((_BYTE *)v10[0] + 40) & 1) != 0 ? 8 : 0;
      v15.x += *(_DWORD *)((char *)v10[0] + v7 + 1432);
      v15.y += *(_DWORD *)((char *)v10[0] + v7 + 1436);
      LOBYTE(v5) = RGNOBJ::bInside((RGNOBJ *)&v9, &v15) == 2;
      v6 = v5;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v12);
  }
  else
  {
    EngSetLastError(6u);
    v6 = -1;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  return v6;
}
