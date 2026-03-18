/*
 * XREFs of ?CalculateNoMoveDirty@CDwmMetaRegion@@AEAAJXZ @ 0x18014F030
 * Callers:
 *     ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x18014E918 (-AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180193F5C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::CalculateNoMoveDirty(CDwmMetaRegion *this)
{
  signed int v1; // ebx
  void *v3; // rcx
  HRGN RectRgn; // rbp
  signed int v5; // eax
  int v6; // edx
  unsigned int v7; // ecx
  int v8; // r8d
  signed int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // r8d
  HRGN v13; // rsi
  signed int v14; // eax
  int v15; // edx
  unsigned int v16; // ecx
  int v17; // r8d
  signed int LastError; // eax
  int v19; // edx
  unsigned int v20; // ecx
  int v21; // r8d

  v1 = 0;
  if ( *((_BYTE *)this + 40) )
  {
    v3 = (void *)*((_QWORD *)this + 1);
    if ( v3 )
    {
      DeleteObject(v3);
      *((_QWORD *)this + 1) = 0LL;
    }
    SetLastError(0);
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    if ( RectRgn )
    {
      SetLastError(0);
      if ( CombineRgn(RectRgn, RectRgn, *((HRGN *)this + 3), 2) )
      {
        OffsetRgn(RectRgn, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
        SetLastError(0);
        v13 = CreateRectRgn(0, 0, 0, 0);
        if ( v13 )
        {
          SetLastError(0);
          if ( CombineRgn(v13, *(HRGN *)this, RectRgn, 4) )
          {
            *((_QWORD *)this + 1) = v13;
            v13 = 0LL;
          }
          else
          {
            LastError = GetLastError();
            v1 = LastError;
            if ( LastError > 0 )
              v1 = (unsigned __int16)LastError | 0x80070000;
            if ( v1 >= 0 )
              v1 = CheckGUIHandleQuota(v20, v19, v21);
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0x1CCu);
          }
          if ( v13 )
            DeleteObject(v13);
        }
        else
        {
          v14 = GetLastError();
          v1 = v14;
          if ( v14 > 0 )
            v1 = (unsigned __int16)v14 | 0x80070000;
          if ( v1 >= 0 )
            v1 = CheckGUIHandleQuota(v16, v15, v17);
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0x1C7u);
        }
      }
      else
      {
        v9 = GetLastError();
        v1 = v9;
        if ( v9 > 0 )
          v1 = (unsigned __int16)v9 | 0x80070000;
        if ( v1 >= 0 )
          v1 = CheckGUIHandleQuota(v11, v10, v12);
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0x1C3u);
      }
      DeleteObject(RectRgn);
    }
    else
    {
      v5 = GetLastError();
      v1 = v5;
      if ( v5 > 0 )
        v1 = (unsigned __int16)v5 | 0x80070000;
      if ( v1 >= 0 )
        v1 = CheckGUIHandleQuota(v7, v6, v8);
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0x1BFu);
    }
  }
  return (unsigned int)v1;
}
