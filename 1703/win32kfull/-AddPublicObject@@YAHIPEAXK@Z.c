/*
 * XREFs of ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01E4240
 * Callers:
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E49F4 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E5208 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E5440 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01E452C (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01E4570 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 */

__int64 __fastcall AddPublicObject(unsigned int a1, void *a2, int a3)
{
  struct tagPUBOBJ *v6; // rax
  __int64 v7; // rax
  int v8; // ecx

  if ( a1 == 2 || a1 == 9 || a1 == 130 )
  {
    v6 = IsObjectPublic(a2);
    if ( v6 )
    {
      v8 = *((_DWORD *)v6 + 4);
      if ( v8 < 2147483646 )
      {
        *((_DWORD *)v6 + 4) = v8 + 1;
        return 1LL;
      }
      UserSetLastError(3221225621LL);
    }
    else
    {
      v7 = Win32AllocPool(24LL, 878998357LL);
      if ( v7 )
      {
        *(_DWORD *)(v7 + 16) = 1;
        *(_QWORD *)(v7 + 8) = a2;
        *(_DWORD *)(v7 + 20) = a3;
        *(_QWORD *)v7 = gpPublicObjectList;
        gpPublicObjectList = v7;
        GiveObject(a1, a2, 0);
        return 1LL;
      }
    }
  }
  return 0LL;
}
