/*
 * XREFs of CApplicationFrameService::_FindFrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9___ @ 0x180050C00
 * Callers:
 *     ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18004F330 (-OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameService::_FindFrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9___(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // r9
  signed int v6; // r10d
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rax

  *a3 = 0LL;
  v4 = 0LL;
  v6 = -2147023728;
  do
  {
    if ( v4 >= a1[19] )
      break;
    v7 = a1[18];
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8 * v4) + 64LL);
    v6 = a2 != v8 ? 0x80070490 : 0;
    if ( v8 == a2 )
    {
      v9 = *(_QWORD *)(v7 + 8 * v4);
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 52));
      *a3 = *(_QWORD *)(v7 + 8 * v4);
    }
    ++v4;
  }
  while ( v8 != a2 );
  v10 = 0LL;
  if ( v6 < 0 )
  {
    do
    {
      if ( v10 >= a1[15] )
        break;
      v11 = a1[14];
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 8 * v10) + 64LL);
      v6 = a2 != v12 ? 0x80070490 : 0;
      if ( v12 == a2 )
      {
        v13 = *(_QWORD *)(v11 + 8 * v10);
        if ( v13 )
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 52));
        *a3 = *(_QWORD *)(v11 + 8 * v10);
      }
      ++v10;
    }
    while ( v12 != a2 );
  }
  return (unsigned int)v6;
}
