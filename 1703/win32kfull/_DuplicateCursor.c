/*
 * XREFs of _DuplicateCursor @ 0x1C0139CE0
 * Callers:
 *     _GetWindowIcon @ 0x1C0139C3C (_GetWindowIcon.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0044EE0 (_DestroyCursor.c)
 *     _SetCursorIconData @ 0x1C0046B74 (_SetCursorIconData.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     _InternalGetIconInfo @ 0x1C0048770 (_InternalGetIconInfo.c)
 *     _CreateEmptyCursorObject @ 0x1C00F4770 (_CreateEmptyCursorObject.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

struct tagCURSOR *__fastcall DuplicateCursor(__int64 a1, int a2)
{
  struct tagCURSOR *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 EmptyCursorObject; // rax
  size_t Size; // [rsp+28h] [rbp-79h]
  __int128 v9; // [rsp+38h] [rbp-69h] BYREF
  int v10; // [rsp+48h] [rbp-59h] BYREF
  __int16 v11; // [rsp+4Ch] [rbp-55h]
  __int16 v12; // [rsp+50h] [rbp-51h]
  __int64 v13; // [rsp+58h] [rbp-49h]
  __int64 v14; // [rsp+60h] [rbp-41h]
  int v15[36]; // [rsp+68h] [rbp-39h] BYREF
  size_t v16; // [rsp+110h] [rbp+6Fh] BYREF

  LODWORD(v16) = a2;
  v2 = 0LL;
  if ( (unsigned int)InternalGetIconInfo(a1, (__int64)&v10, 0LL, 0LL, &v16, 0) )
  {
    EmptyCursorObject = CreateEmptyCursorObject(0, v4, v5);
    v2 = (struct tagCURSOR *)HMValidateHandle(EmptyCursorObject, 3);
    if ( v2 )
    {
      v9 = 0uLL;
      memset(v15, 0, 0x88uLL);
      *(_OWORD *)v15 = 0LL;
      if ( v10 )
        LOWORD(v15[4]) = 3;
      else
        LOWORD(v15[4]) = 1;
      LODWORD(Size) = 0;
      v15[20] = v16;
      v15[21] = *(_DWORD *)(a1 + 140);
      v15[22] = *(_DWORD *)(a1 + 144);
      LOWORD(v15[7]) = v11;
      HIWORD(v15[7]) = v12;
      *(_QWORD *)&v15[8] = v13;
      *(_QWORD *)&v15[10] = v14;
      if ( !(unsigned int)SetCursorIconData((__int64)v2, (__int64)&v9, &v9, (__int64)v15, Size) )
      {
        DestroyCursor(v2, 0LL);
        return 0LL;
      }
    }
    else
    {
      GreDeleteObject(v13);
      GreDeleteObject(v14);
    }
  }
  return v2;
}
