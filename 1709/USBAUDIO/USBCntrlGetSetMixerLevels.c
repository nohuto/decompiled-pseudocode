/*
 * XREFs of USBCntrlGetSetMixerLevels @ 0x1C001FD70
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetSetProperty @ 0x1C001B970 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBCntrlGetSetMixerLevels(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        _DWORD *a7)
{
  __int16 v7; // bx
  int SetProperty; // ebx
  __int64 v10; // r15
  __int16 *PoolWithTag; // rax
  __int16 *v12; // rsi
  _DWORD *v13; // r14
  __int16 *v14; // rcx
  int *v15; // r8
  __int64 v16; // r9
  int v17; // eax
  int v18; // eax
  __int16 *v19; // rdx
  __int16 v20; // cx
  __int64 v22; // [rsp+50h] [rbp-48h]

  v7 = a4;
  if ( a6 <= 1 || a4 == a5 && (unsigned int)(a4 - 1) > 0xFFFFFFFD )
  {
    v10 = a6;
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
    PoolWithTag = (__int16 *)ExAllocatePoolWithTag((POOL_TYPE)512, 2LL * a6, 0x41627845u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      v13 = a7;
      if ( (a3 & 0x80) == 0 && a6 )
      {
        v14 = PoolWithTag;
        v15 = a7;
        v16 = a6;
        do
        {
          v17 = *v15++;
          *v14++ = v17 / 256;
          --v16;
        }
        while ( v16 );
      }
      SetProperty = USBHwGetSetProperty(
                      a1,
                      27,
                      (a3 >> 7) & 1,
                      a3,
                      v7,
                      a5,
                      *(_WORD *)(a2 + 80),
                      *(unsigned __int8 *)(*(_QWORD *)(v22 + 48) + 2LL),
                      (__int64)v12,
                      2 * a6);
      if ( SetProperty < 0 )
      {
        v18 = *(_DWORD *)(a2 + 100);
        if ( (v18 & 1) == 0 )
          *(_DWORD *)(a2 + 100) = v18 | 1;
        SetProperty = 0;
      }
      if ( (a3 & 0x80) != 0 && a6 )
      {
        v19 = v12;
        do
        {
          v20 = *v19++;
          *v13++ = (__int16)(v20 << 8);
          --v10;
        }
        while ( v10 );
      }
      ExFreePool(v12);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)SetProperty;
}
