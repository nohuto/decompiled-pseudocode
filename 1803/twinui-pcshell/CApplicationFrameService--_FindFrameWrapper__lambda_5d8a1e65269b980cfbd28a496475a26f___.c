/*
 * XREFs of CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___ @ 0x180081338
 * Callers:
 *     ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180082370 (-GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // r11
  __int64 v5; // r10
  signed int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  unsigned __int64 v13; // r11
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rdi
  signed __int64 v17; // rax
  signed __int64 v18; // rtt

  *a3 = 0LL;
  v4 = 0LL;
  v5 = a2;
  v7 = -2147023728;
  do
  {
    if ( v4 >= a1[18] )
      break;
    v8 = a1[17];
    v9 = *(_QWORD *)(v8 + 8 * v4);
    v10 = *(_QWORD *)(v9 + 88);
    v7 = v5 != v10 ? 0x80070490 : 0;
    if ( v10 == v5 )
    {
      if ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 72);
        while ( v11 >= 0 )
        {
          if ( (_DWORD)v11 != 0x7FFFFFFF )
          {
            v12 = v11;
            v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 72), v11 + 1, v11);
            if ( v12 != v11 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v11 + 16));
      }
LABEL_11:
      *a3 = *(_QWORD *)(v8 + 8 * v4);
    }
    ++v4;
  }
  while ( v10 != v5 );
  v13 = 0LL;
  if ( v7 < 0 )
  {
    do
    {
      if ( v13 >= a1[14] )
        break;
      v14 = a1[13];
      v15 = *(_QWORD *)(v14 + 8 * v13);
      v16 = *(_QWORD *)(v15 + 88);
      v7 = v5 != v16 ? 0x80070490 : 0;
      if ( v16 == v5 )
      {
        if ( v15 )
        {
          v17 = *(_QWORD *)(v15 + 72);
          while ( v17 >= 0 )
          {
            if ( (_DWORD)v17 != 0x7FFFFFFF )
            {
              v18 = v17;
              v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), v17 + 1, v17);
              if ( v18 != v17 )
                continue;
            }
            goto LABEL_23;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v17 + 16));
        }
LABEL_23:
        *a3 = *(_QWORD *)(v14 + 8 * v13);
      }
      ++v13;
    }
    while ( v16 != v5 );
  }
  return (unsigned int)v7;
}
