/*
 * XREFs of sub_14050EE10 @ 0x14050EE10
 * Callers:
 *     WbDispatchOperation @ 0x14050F10C (WbDispatchOperation.c)
 * Callees:
 *     WbGetWarbirdThread @ 0x14050EF0C (WbGetWarbirdThread.c)
 *     sub_14050F0D8 @ 0x14050F0D8 (sub_14050F0D8.c)
 *     sub_14050F6D0 @ 0x14050F6D0 (sub_14050F6D0.c)
 *     WbSetTrapFrame @ 0x14050F91C (WbSetTrapFrame.c)
 */

__int64 __fastcall sub_14050EE10(__int64 a1, __int64 a2)
{
  int WarbirdThread; // eax
  __int64 v4; // rdi
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  WarbirdThread = WbGetWarbirdThread(a1, a2, &v11);
  v4 = v11;
  v5 = WarbirdThread;
  if ( WarbirdThread >= 0 )
  {
    v6 = *(_DWORD *)(v11 + 16);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v11 + 24) + 32LL * (unsigned int)(v6 - 1);
      v9[1] = *(_QWORD *)(v7 + 8);
      v9[0] = *(_QWORD *)(v7 + 16);
      v10 = *(_DWORD *)(v7 + 24);
      v5 = WbSetTrapFrame(v11, v9);
      if ( v5 >= 0 )
        v5 = sub_14050F6D0(a1, v4, 1LL);
    }
    else
    {
      v5 = -1073741811;
    }
  }
  sub_14050F0D8(a1, v4);
  return (unsigned int)v5;
}
