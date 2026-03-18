/*
 * XREFs of CitDisplayRequestChange @ 0x1C006467C
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0063D28 (UserPowerInfoCallout.c)
 * Callees:
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1C00530A0 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C00535D8 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 */

void __fastcall CitDisplayRequestChange(int a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rbx
  bool v3; // si
  unsigned __int64 v4; // rdi
  unsigned int v5; // eax
  int v6; // r9d
  int v7; // edx
  int v8; // r8d
  int v9; // ecx
  bool v10; // cf
  unsigned int v11; // eax
  char v12; // al

  v1 = qword_1C018E8C8;
  if ( qword_1C018E8C8 )
  {
    v3 = a1 != 0;
    if ( (a1 != 0) != ((*((_BYTE *)qword_1C018E8C8 + 432) & 4) != 0) )
    {
      v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      CIT_USER_ACTIVE_TRACKER::OnDisplayRequiredChange(
        (struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C018E8C8 + 568),
        v4,
        a1);
      if ( !a1 )
      {
        if ( byte_1C018E8B5 )
          CitpBitmapUpdateForTimeRange(
            (struct _CIT_IMPACT_CONTEXT *)((char *)v1 + 16),
            *((_DWORD *)v1 + 135),
            v4,
            dword_1C018E8D8,
            (unsigned int)dword_1C018E880);
        v5 = *((_DWORD *)v1 + 32);
        v6 = -1;
        v7 = -1;
        v8 = v4 - *((_DWORD *)v1 + 135);
        v9 = v5 + 1;
        v10 = v5 + 1 < v5;
        v11 = *((_DWORD *)v1 + 33);
        if ( !v10 )
          v7 = v9;
        *((_DWORD *)v1 + 32) = v7;
        if ( v11 + v8 >= v11 )
          v6 = v11 + v8;
        *((_DWORD *)v1 + 33) = v6;
      }
      v12 = (4 * v3) | *((_BYTE *)v1 + 432) & 0xFB;
      *((_DWORD *)v1 + 135) = v4;
      *((_BYTE *)v1 + 432) = v12;
    }
  }
}
