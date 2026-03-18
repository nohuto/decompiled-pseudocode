/*
 * XREFs of NtGdiRoundRect @ 0x1C027F050
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     NtGdiRectangle @ 0x1C00F94C0 (NtGdiRectangle.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C011D00C (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0123538 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C028ED54 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 */

__int64 __fastcall NtGdiRoundRect(HDC a1, __int64 a2, __int64 a3, __int64 a4, LONG a5, unsigned int a6, int a7)
{
  LONG v7; // r12d
  LONG v8; // r15d
  LONG v9; // edi
  POINTL *v10; // rcx
  POINTL v11; // rdx
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  POINTL v15; // rbx
  POINTL *v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v18; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v19; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v20[20]; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ ppo; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-48h]
  _BYTE v23[32]; // [rsp+108h] [rbp+8h] BYREF
  int v24; // [rsp+128h] [rbp+28h]

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( a6 && a7 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v17, a1);
    v10 = v17[0];
    if ( !v17[0] || (v17[0][4].y & 0x10000) != 0 )
    {
      EngSetLastError(6u);
      v13 = 0;
LABEL_22:
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
      return v13;
    }
    v11 = v17[0][10];
    v12 = *(_DWORD *)(*(_QWORD *)&v11 + 8LL);
    if ( (v12 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v17[0], *(_QWORD *)(*(_QWORD *)&v11 + 16LL));
      v10 = v17[0];
    }
    if ( (v12 & 0x2000) != 0 )
      GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)&v10[10] + 24LL));
    v18.bottom = a5;
    v18.left = v9;
    v18.top = v8;
    v18.right = v7;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v19, (struct XDCOBJ *)v17, 516);
    v13 = 1;
    EBOX::EBOX((EBOX *)v20, (struct DCOBJ *)v17, &v18, (struct _LINEATTRS *)&v17[0][23], 1);
    if ( v20[0] )
      goto LABEL_22;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v17, 1);
    if ( v22 )
    {
      if ( (unsigned int)bRoundRect((struct EPATHOBJ *)&ppo, (struct EBOX *)v20, a6) )
      {
        if ( (v17[0][22].x & 1) == 0 )
        {
          if ( v20[1] )
          {
            v15 = v17[0][18];
            v17[0][18] = v17[0][19];
            v17[0][41].y |= 1u;
            v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, v17, 0LL, 0LL, 2u);
            v17[0][18] = v15;
            v17[0][41].y |= 1u;
          }
          else
          {
            v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, v17, (LINEATTRS *)&v17[0][23], &v19, 3u);
          }
          v13 = v14;
        }
        goto LABEL_19;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v13 = 0;
LABEL_19:
    EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
    if ( v24 )
    {
      PopThreadGuardedObject(v23);
      v24 = 0;
    }
    goto LABEL_22;
  }
  return NtGdiRectangle(a1, a2, a3, a4, a5);
}
