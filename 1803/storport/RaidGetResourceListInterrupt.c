/*
 * XREFs of RaidGetResourceListInterrupt @ 0x1C003791C
 * Callers:
 *     RaidAdapterConnectInterrupt @ 0x1C0025920 (RaidAdapterConnectInterrupt.c)
 * Callees:
 *     RaidGetResourceListElement @ 0x1C00378A8 (RaidGetResourceListElement.c)
 */

__int64 __fastcall RaidGetResourceListInterrupt(
        __int64 *a1,
        char a2,
        _DWORD *a3,
        unsigned __int8 *a4,
        int *a5,
        bool *a6,
        _QWORD *a7,
        unsigned __int8 *a8)
{
  unsigned int v12; // ebp
  unsigned __int8 *v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // r14d
  unsigned int i; // ebx
  _BYTE *v18; // r9
  unsigned __int8 v19; // al
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  bool v22; // zf
  int v23; // [rsp+30h] [rbp-38h] BYREF
  _BYTE *v24; // [rsp+38h] [rbp-30h] BYREF
  int v25; // [rsp+70h] [rbp+8h] BYREF

  v12 = -1073741275;
  if ( !a1 )
    return 0LL;
  v14 = a8;
  v15 = *a1;
  *a4 = 0;
  *v14 = 0;
  if ( v15 )
  {
    v16 = *(_DWORD *)(v15 + 16);
    for ( i = 0; i < v16; ++i )
    {
      RaidGetResourceListElement(a1, i, &v23, &v25, 0LL, (__int64 *)&v24);
      v18 = v24;
      if ( *v24 == 2 )
      {
        v19 = v24[4];
        v12 = 0;
        *a4 = v19;
        if ( !a2 )
        {
          v20 = a7;
          v21 = *(_QWORD *)(v18 + 12);
          *a3 = *((_DWORD *)v18 + 2);
          v22 = v18[1] == 3;
          v20[1] = 0LL;
          *v20 = v21;
          *((_WORD *)v20 + 4) = *((_WORD *)v18 + 3);
          *a6 = v22;
          *a5 = v18[2] & 1;
          return v12;
        }
        if ( v19 > *v14 )
          *v14 = v19;
      }
    }
  }
  return v12;
}
