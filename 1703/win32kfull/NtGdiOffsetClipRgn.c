/*
 * XREFs of NtGdiOffsetClipRgn @ 0x1C0109CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C007AE9C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C007B538 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall NtGdiOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  struct REGION *v8; // rax
  DC *v9[2]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+38h] [rbp-31h]
  __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v15[32]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  struct _POINTL v18; // [rsp+E8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v5 = 0;
  if ( !v9[0] )
  {
    EngSetLastError(6u);
    goto LABEL_6;
  }
  v16 = 0LL;
  v17 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v9, 1);
  if ( (v15[24] & 1) != 0 )
  {
    v6 = *((_QWORD *)v9[0] + 28);
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 32) > 1u )
      {
        v12 = *((_QWORD *)v9[0] + 28);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10, *(_DWORD *)(v6 + 80));
        if ( !v10 )
        {
          EngSetLastError(8u);
          if ( v11 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
          goto LABEL_5;
        }
        RGNOBJ::vCopy((RGNOBJ *)&v10, (struct RGNOBJ *)&v12);
        v6 = v10;
        ++*(_DWORD *)(v10 + 32);
        --*(_DWORD *)(v12 + 32);
        *((_QWORD *)v9[0] + 28) = v6;
        if ( v11 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
      }
      v13 = v6;
      v18.x = a2;
      v18.y = a3;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)v9, -2147483132);
      if ( ((*(_DWORD *)(v14[0] + 32LL) & 2) != 0
         || EXFORMOBJ::bXform((EXFORMOBJ *)v14, (struct _VECTORL *)&v18, (struct _VECTORL *)&v18, 1uLL))
        && RGNOBJ::bOffset((RGNOBJ *)&v13, &v18) )
      {
        DC::bTightenRao(v9[0]);
        v8 = DC::prgnVisSnap(v9[0]);
        DC::vUpdate_VisRect(v9[0], v8);
        v5 = RGNOBJ::iComplexity((RGNOBJ *)&v13);
      }
      else
      {
        EngSetLastError(0x3EBu);
      }
      goto LABEL_5;
    }
    v5 = 2;
  }
LABEL_5:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
LABEL_6:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v9);
  return v5;
}
