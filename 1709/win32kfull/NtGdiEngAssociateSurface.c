/*
 * XREFs of NtGdiEngAssociateSurface @ 0x1C01196F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z @ 0x1C01197A4 (-ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z.c)
 *     ?ValidUmpdHdev@@YAHPEAUHDEV__@@@Z @ 0x1C01199C4 (-ValidUmpdHdev@@YAHPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall NtGdiEngAssociateSurface(HSURF hsurf, HDEV a2, int a3)
{
  HDEV v3; // rbp
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rbx
  FLONG v9; // esi
  HDEV v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  v11 = a2;
  LOBYTE(a2) = 5;
  v6 = 0;
  v7 = HmgShareLockCheckIgnoreStockBit(hsurf, a2);
  v8 = v7;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 112) & 0x40000) != 0 && (unsigned int)ValidUmpdHdev(v3) && v11 )
    {
      v9 = a3 & 0xFFFFB7EF;
      if ( (v9 & 0xFFFC4A10) == 0 && (unsigned int)ValidUmpdHooks((struct PDEVOBJ *)&v11, v9) )
        v6 = EngAssociateSurface(hsurf, v3, v9);
      PDEVOBJ::vUnreferencePdev(&v11, 0LL);
    }
    DEC_SHARE_REF_CNT(v8);
  }
  return v6;
}
