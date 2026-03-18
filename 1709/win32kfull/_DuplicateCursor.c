/*
 * XREFs of _DuplicateCursor @ 0x1C01409BC
 * Callers:
 *     _GetWindowIcon @ 0x1C0140914 (_GetWindowIcon.c)
 * Callees:
 *     _InternalGetIconInfo @ 0x1C001D404 (_InternalGetIconInfo.c)
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 *     _SetCursorIconData @ 0x1C0098908 (_SetCursorIconData.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     _CreateEmptyCursorObject @ 0x1C00995DC (_CreateEmptyCursorObject.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

struct tagCURSOR *__fastcall DuplicateCursor(__int64 a1, int a2)
{
  struct tagCURSOR *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 EmptyCursorObject; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  size_t Size; // [rsp+28h] [rbp-79h]
  __int128 v14; // [rsp+38h] [rbp-69h] BYREF
  int v15; // [rsp+48h] [rbp-59h] BYREF
  __int16 v16; // [rsp+4Ch] [rbp-55h]
  __int16 v17; // [rsp+50h] [rbp-51h]
  __int64 v18; // [rsp+58h] [rbp-49h]
  __int64 v19; // [rsp+60h] [rbp-41h]
  int v20[36]; // [rsp+68h] [rbp-39h] BYREF
  size_t v21; // [rsp+110h] [rbp+6Fh] BYREF

  LODWORD(v21) = a2;
  v2 = 0LL;
  if ( (unsigned int)InternalGetIconInfo(a1, (__int64)&v15, 0LL, 0LL, &v21, 0) )
  {
    EmptyCursorObject = CreateEmptyCursorObject(0, v4, v5);
    LOBYTE(v7) = 3;
    v2 = (struct tagCURSOR *)HMValidateHandle(EmptyCursorObject, v7, v8, v9);
    if ( v2 )
    {
      v14 = 0uLL;
      memset(v20, 0, 0x88uLL);
      *(_OWORD *)v20 = 0LL;
      if ( v15 )
        LOWORD(v20[4]) = 3;
      else
        LOWORD(v20[4]) = 1;
      LODWORD(Size) = 0;
      v20[20] = v21;
      v20[21] = *(_DWORD *)(a1 + 140);
      v20[22] = *(_DWORD *)(a1 + 144);
      LOWORD(v20[7]) = v16;
      HIWORD(v20[7]) = v17;
      *(_QWORD *)&v20[8] = v18;
      *(_QWORD *)&v20[10] = v19;
      if ( !(unsigned int)SetCursorIconData((__int64)v2, (__int64)&v14, &v14, (__int64)v20, Size) )
      {
        DestroyCursor(v2, 0LL, v10, v11);
        return 0LL;
      }
    }
    else
    {
      GreDeleteObject(v18);
      GreDeleteObject(v19);
    }
  }
  return v2;
}
