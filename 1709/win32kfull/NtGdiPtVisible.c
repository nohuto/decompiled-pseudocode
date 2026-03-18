/*
 * XREFs of NtGdiPtVisible @ 0x1C027AA20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C001B914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiPtVisible(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  struct REGION *v8; // [rsp+28h] [rbp-29h] BYREF
  DC *v9[2]; // [rsp+30h] [rbp-21h] BYREF
  _BYTE v10[24]; // [rsp+40h] [rbp-11h] BYREF
  _BYTE v11[32]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v12; // [rsp+78h] [rbp+27h]
  int v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+84h] [rbp+33h]
  struct _POINTL v15; // [rsp+D0h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v12 = 0LL;
    v13 = 0;
    v14 = 0;
    v5 = 1;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v11, (struct XDCOBJ *)v9, 1);
    if ( (v11[24] & 1) != 0 )
    {
      v8 = XDCOBJ::prgnEffRao(v9);
      v15.x = a2;
      v15.y = a3;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v9, -2147483132);
      EXFORMOBJ::bXform((EXFORMOBJ *)v10, &v15, 1LL);
      v6 = *((_DWORD *)v9[0] + 10) & 1LL;
      v15.x += *((_DWORD *)v9[0] + 2 * v6 + 358);
      v15.y += *((_DWORD *)v9[0] + 2 * v6 + 359);
      v5 = RGNOBJ::bInside((RGNOBJ *)&v8, &v15) == 2;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v11);
  }
  else
  {
    EngSetLastError(6u);
    v5 = -1;
  }
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v5;
}
