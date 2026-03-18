/*
 * XREFs of DxgkEngDetectGDIPath @ 0x1C0250A00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C024F820 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     ?OverlapCheck@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C024FB50 (-OverlapCheck@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?StateFlags@PDEVOBJ@@QEAAKXZ @ 0x1C024FC0C (-StateFlags@PDEVOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall DxgkEngDetectGDIPath(__int64 a1, HDEV a2, HWND a3, HRGN a4)
{
  unsigned int v9; // edi
  HDEV i; // rbx
  char v11; // al
  unsigned int v12; // eax
  HDEV v15; // [rsp+58h] [rbp+10h] BYREF

  if ( (unsigned int)UserIsRemoteConnection(a1, a2, a3, a4) )
  {
    return 1;
  }
  else
  {
    if ( ((_DWORD)a2[8] & 0x20000) != 0 )
    {
      v9 = 0;
      for ( i = (HDEV)hdevEnumerate(0LL); i; i = (HDEV)hdevEnumerate(i) )
      {
        v15 = i;
        if ( *((HDEV *)i + 2) == a2 && ((_DWORD)i[8] & 0x20400) == 0 && !v9 )
        {
          v11 = PDEVOBJ::StateFlags((PDEVOBJ *)&v15);
          if ( (v11 & 8) != 0 && (v11 & 1) != 0 )
          {
            v9 = 1;
          }
          else
          {
            if ( *(_QWORD *)(*((_QWORD *)i + 324) + 256LL) == a1 && *((_DWORD *)i + 544) > 8u )
              v12 = InternalSpritesCollision(i, a3, a4);
            else
              v12 = OverlapCheck(i, a4);
            v9 = v12;
          }
        }
      }
    }
    else if ( *(_QWORD *)(*((_QWORD *)a2 + 324) + 256LL) == a1 && *((_DWORD *)a2 + 544) > 8u )
    {
      return (unsigned int)InternalSpritesCollision(a2, a3, a4);
    }
    else
    {
      return OverlapCheck(a2, a4);
    }
    return v9;
  }
}
