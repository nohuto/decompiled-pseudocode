/*
 * XREFs of DxgkEngDetectGDIPath @ 0x1C0252430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0251270 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     ?OverlapCheck@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C02515A0 (-OverlapCheck@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?StateFlags@PDEVOBJ@@QEAAKXZ @ 0x1C025165C (-StateFlags@PDEVOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall DxgkEngDetectGDIPath(__int64 a1, HDEV a2, HWND a3, HRGN a4)
{
  unsigned int v9; // edi
  HDEV i; // rbx
  int v11; // eax
  char v12; // al
  unsigned int v13; // eax
  HDEV v16; // [rsp+58h] [rbp+10h] BYREF

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
        v16 = i;
        if ( *((HDEV *)i + 2) == a2 )
        {
          v11 = *((_DWORD *)i + 8);
          if ( (v11 & 0x400) == 0 && (v11 & 0x20000) == 0 && !v9 )
          {
            v12 = PDEVOBJ::StateFlags((PDEVOBJ *)&v16);
            if ( (v12 & 8) != 0 && (v12 & 1) != 0 )
            {
              v9 = 1;
            }
            else
            {
              if ( *(_QWORD *)(*((_QWORD *)i + 324) + 256LL) == a1 && *((_DWORD *)i + 544) > 8u )
                v13 = InternalSpritesCollision(i, a3, a4);
              else
                v13 = OverlapCheck(i, a4);
              v9 = v13;
            }
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
