/*
 * XREFs of sub_18005DB48 @ 0x18005DB48
 * Callers:
 *     sub_18005D9D8 @ 0x18005D9D8 (sub_18005D9D8.c)
 *     sub_180109064 @ 0x180109064 (sub_180109064.c)
 * Callees:
 *     sub_1800030E8 @ 0x1800030E8 (sub_1800030E8.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_18005DC24 @ 0x18005DC24 (sub_18005DC24.c)
 *     sub_180109A80 @ 0x180109A80 (sub_180109A80.c)
 *     sub_18010D634 @ 0x18010D634 (sub_18010D634.c)
 */

void *__fastcall sub_18005DB48(int a1, __int64 a2, int a3, int a4, ULONG CacheIndexOut, int *a6)
{
  int *v7; // r14
  int v8; // edx
  int v9; // ebx
  __int64 v10; // rax
  void *v11; // rdi
  _QWORD *v13; // rax
  void *v14; // rbp
  int v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0;
  v15 = 0;
  v7 = a6;
  v8 = (a3 != 0 ? 18 : 16) | 4;
  if ( !a4 )
    v8 = a3 != 0 ? 18 : 16;
  v9 = v8 | 8;
  if ( !CacheIndexOut )
    v9 = v8;
  if ( a6 )
    v15 = *a6;
  v10 = sub_18005DC24(v9, a1, (int)&v16, (int)&v15, &CacheIndexOut);
  v11 = (void *)v10;
  if ( v7 )
    *v7 = v15 & 0xFFE8FFFF;
  if ( !v10 )
    return 0LL;
  if ( a1 >= 0 && CacheIndexOut != a1 )
  {
LABEL_18:
    sub_18010D634(v11);
    return 0LL;
  }
  v13 = sub_1800030E8(v10, v16, 1);
  v14 = v13;
  if ( v13 )
  {
    if ( (v15 & 0x1C0000) == 0 )
    {
      if ( !(unsigned int)sub_180109A80(v13, (unsigned int)v16) )
      {
        sub_18005DC24(v9 | 0x120000, a1, 0, 0, 0LL);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
        goto LABEL_18;
      }
      sub_18005DC24(v9 | 0x60000, a1, 0, 0, 0LL);
    }
  }
  else
  {
    sub_18010D634(v11);
  }
  return v14;
}
