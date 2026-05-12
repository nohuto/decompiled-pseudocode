/*
 * XREFs of RaidTranslateResourceListAddress @ 0x1C0010B78
 * Callers:
 *     StorPortGetDeviceBase @ 0x1C0010A20 (StorPortGetDeviceBase.c)
 * Callees:
 *     RaidGetResourceListElement @ 0x1C0010D44 (RaidGetResourceListElement.c)
 */

__int64 __fastcall RaidTranslateResourceListAddress(
        __int64 *a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _QWORD *a7)
{
  _QWORD *v7; // r14
  char v8; // di
  __int64 v10; // rax
  int v12; // r15d
  int v13; // r13d
  unsigned int v14; // ebp
  int v15; // esi
  unsigned __int64 v16; // rdx
  _QWORD v18[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  int v20; // [rsp+88h] [rbp+10h] BYREF

  v7 = a7;
  v8 = 0;
  v19 = 0LL;
  v18[0] = 0LL;
  v10 = *a1;
  v12 = 15;
  *a7 = 0LL;
  if ( a2 != 17 )
    v12 = a2;
  v13 = (int)a1;
  if ( v10 )
  {
    v14 = *(_DWORD *)(v10 + 16);
    v15 = 0;
    if ( v14 )
    {
      while ( 1 )
      {
        RaidGetResourceListElement(v13, v15, (unsigned int)&a6, (unsigned int)&v20, (__int64)&v19, (__int64)v18);
        if ( a6 == v12 && v20 == a3 )
        {
          v16 = *(_QWORD *)(v19 + 4);
          if ( v16 <= a4 && v16 + *(unsigned int *)(v19 + 12) >= a4 + a5 )
            break;
        }
        if ( ++v15 >= v14 )
          return v8 == 0 ? 0xC0000001 : 0;
      }
      v8 = 1;
      *v7 = a4 + *(_QWORD *)(v18[0] + 4LL) - v16;
    }
  }
  return v8 == 0 ? 0xC0000001 : 0;
}
