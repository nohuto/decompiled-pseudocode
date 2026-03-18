/*
 * XREFs of NtGdiGetDCObject @ 0x1C000E960
 * Callers:
 *     CreateCompatiblePublicDC @ 0x1C000CF78 (CreateCompatiblePublicDC.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0074BF8 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetDCObject(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rdi
  DC *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  __int64 *v8; // rax
  DC *v9[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h]
  int v12; // [rsp+48h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]

  v2 = a2;
  v3 = 0LL;
  LOBYTE(a2) = 1;
  v9[1] = 0LL;
  v9[0] = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( v9[0] )
  {
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v9) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v9[0] + 3);
      return v3;
    }
    v4 = v9[0];
    if ( (*((_DWORD *)v9[0] + 134) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v9[0]);
      v4 = v9[0];
    }
    if ( v4 )
    {
      v5 = *((_QWORD *)v4 + 10);
      v6 = *(_DWORD *)(v5 + 8);
      if ( (v6 & 0x1000) != 0 )
      {
        GreDCSelectBrush(v4, *(_QWORD *)(v5 + 16));
        v4 = v9[0];
      }
      if ( (v6 & 0x2000) != 0 )
      {
        GreDCSelectPen(v4, *(_QWORD *)(*((_QWORD *)v4 + 10) + 24LL));
        v4 = v9[0];
      }
      if ( v2 == 655360 )
      {
        v3 = *(_QWORD *)(*((_QWORD *)v4 + 10) + 176LL);
      }
      else if ( v2 == 0x80000 )
      {
        v3 = *((_QWORD *)v4 + 11);
      }
      else if ( v2 == 327680 )
      {
        v14 = 0LL;
        v10 = 0LL;
        v11 = 0LL;
        v12 = 0;
        v13 = 0LL;
        v17 = 0LL;
        v16 = 0LL;
        v15 = 0LL;
        DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v10, (struct XDCOBJ *)v9);
        v3 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v9) + 4);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v10);
      }
      else
      {
        if ( v2 == 0x100000 )
        {
          v8 = (__int64 *)*((_QWORD *)v4 + 18);
        }
        else
        {
          if ( v2 != 3145728 && v2 != 5242880 )
            goto LABEL_12;
          v8 = (__int64 *)*((_QWORD *)v4 + 19);
        }
        v3 = *v8;
      }
LABEL_12:
      XDCOBJ::RestoreAttributes((XDCOBJ *)v9);
      _InterlockedDecrement((volatile signed __int32 *)v9[0] + 3);
    }
  }
  return v3;
}
