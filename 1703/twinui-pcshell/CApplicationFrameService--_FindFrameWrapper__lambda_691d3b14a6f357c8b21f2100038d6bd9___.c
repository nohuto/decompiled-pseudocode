/*
 * XREFs of CApplicationFrameService::_FindFrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9___ @ 0x18004E4D0
 * Callers:
 *     ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18004CD80 (-OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameService::_FindFrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9___(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // r9
  signed int v5; // r10d
  __int64 v6; // r11
  __int64 v7; // rbx
  __int64 v8; // r8
  bool i; // zf
  signed __int32 v10; // eax
  unsigned __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // rbx
  __int64 v14; // r9
  bool j; // zf
  signed __int32 v16; // eax

  *a3 = 0LL;
  v4 = 0LL;
  v5 = -2147023728;
  do
  {
    if ( v4 >= a1[16] )
      break;
    v6 = a1[15];
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8 * v4) + 48LL);
    v5 = a2 != v7 ? 0x80070490 : 0;
    if ( v7 == a2 )
    {
      v8 = *(_QWORD *)(v6 + 8 * v4);
      for ( i = v8 == 0; !i; i = v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 36), v10 + 1, v10) )
      {
        v10 = *(_DWORD *)(v8 + 36);
        if ( v10 == 0x7FFFFFFF )
          break;
      }
      *a3 = *(_QWORD *)(v6 + 8 * v4);
    }
    ++v4;
  }
  while ( v7 != a2 );
  v11 = 0LL;
  if ( v5 < 0 )
  {
    do
    {
      if ( v11 >= a1[12] )
        break;
      v12 = a1[11];
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + 8 * v11) + 48LL);
      v5 = a2 != v13 ? 0x80070490 : 0;
      if ( v13 == a2 )
      {
        v14 = *(_QWORD *)(v12 + 8 * v11);
        for ( j = v14 == 0; !j; j = v16 == _InterlockedCompareExchange(
                                             (volatile signed __int32 *)(v14 + 36),
                                             v16 + 1,
                                             v16) )
        {
          v16 = *(_DWORD *)(v14 + 36);
          if ( v16 == 0x7FFFFFFF )
            break;
        }
        *a3 = *(_QWORD *)(v12 + 8 * v11);
      }
      ++v11;
    }
    while ( v13 != a2 );
  }
  return (unsigned int)v5;
}
