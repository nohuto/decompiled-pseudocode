/*
 * XREFs of RIMIDEAdoptOrphanedRimDevs @ 0x1C008CB80
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C008FB70 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RIMRemoveHoldingFrame @ 0x1C00950C8 (RIMRemoveHoldingFrame.c)
 *     RIMIDEIsCompatibleDevice @ 0x1C010B244 (RIMIDEIsCompatibleDevice.c)
 */

_QWORD *__fastcall RIMIDEAdoptOrphanedRimDevs(PVOID **Object)
{
  __int64 *v2; // r11
  _QWORD **v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rsi
  _QWORD *result; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rdx
  bool v21; // zf
  PVOID *v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-20h]

  RIMLockExclusive((__int64)&gObListLock);
  v2 = (__int64 *)gObRimDevList;
  v3 = &v24;
  v24 = &v24;
  v25 = &v24;
  while ( v2 != &gObRimDevList )
  {
    v4 = *(_QWORD *)(((unsigned __int64)(v2 + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)(v2 - 2) >> 64))
                   + 0x158);
    if ( v4
      && *(_BYTE *)(v4 + 73)
      && (*(_DWORD *)(((unsigned __int64)(v2 + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)(v2 - 2) >> 64))
                    + 0xB8) & 0x1000) != 0
      && (*(_DWORD *)(((unsigned __int64)(v2 + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)(v2 - 2) >> 64))
                    + 0xC8) & 4) == 0
      && (unsigned int)RIMIDEIsCompatibleDevice(Object) )
    {
      v8 = (_QWORD *)(v7 + 136);
      if ( *v3 != &v24 )
        __fastfail(3u);
      *(_QWORD *)(v7 + 144) = v3;
      *v8 = &v24;
      *v3 = v8;
      v25 = (_QWORD *)(v7 + 136);
      *(_DWORD *)(v7 + 200) |= 0x10u;
      v3 = (_QWORD **)v25;
    }
    v2 = (__int64 *)*v2;
  }
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v5 = v24;
  for ( result = &v24; v5 != &v24; result = &v24 )
  {
    v9 = v5 - 17;
    v10 = (_QWORD *)v5[26];
    RIMLockExclusive((__int64)(v10 + 12));
    v5 = (_QWORD *)*v5;
    v11 = v9 + 17;
    v12 = v9[17];
    v13 = (_QWORD *)v9[18];
    if ( *(_QWORD **)(v12 + 8) != v9 + 17 || (_QWORD *)*v13 != v11 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    v14 = v10 + 69;
    v9[18] = v9 + 17;
    *v11 = v11;
    while ( *v14 )
    {
      if ( (_QWORD *)*v14 == v9 )
      {
        *v14 = v9[5];
        break;
      }
      v14 = (_QWORD *)(*v14 + 40LL);
    }
    if ( (v9[23] & 0x100) != 0 )
    {
      v15 = v9 + 15;
      v16 = v9[15];
      v17 = (_QWORD *)v9[16];
      if ( *(_QWORD **)(v16 + 8) != v9 + 15 || (_QWORD *)*v17 != v15 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      v9[16] = v9 + 15;
      *v15 = v15;
      *((_DWORD *)v9 + 46) &= ~0x100u;
    }
    if ( (*((_DWORD *)v9 + 50) & 0x80u) != 0 )
    {
      v18 = (_QWORD *)(v9[59] + 1488LL);
      v19 = *v18;
      v20 = *(_QWORD **)(v9[59] + 1496LL);
      if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v20 != v18 )
        __fastfail(3u);
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      v18[1] = v18;
      *v18 = v18;
    }
    RIMRemoveHoldingFrame(v10, v9);
    v10[13] = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v10);
    RIMLockExclusive((__int64)(Object + 12));
    ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1);
    v9[43] = Object;
    v9[5] = Object[69];
    v9[43] = Object;
    v21 = Object[96] == 0LL;
    Object[69] = (PVOID *)v9;
    if ( !v21 || *((_DWORD *)Object + 244) )
      *((_DWORD *)v9 + 46) = v9[23] & 0xFF81FFFF | 0x20000;
    if ( (*((_DWORD *)v9 + 50) & 0x80u) != 0 )
    {
      v22 = Object[71];
      v23 = (_QWORD *)(v9[59] + 1488LL);
      if ( *v22 != Object + 70 )
        __fastfail(3u);
      *v23 = Object + 70;
      v23[1] = v22;
      *v22 = v23;
      Object[71] = (PVOID *)v23;
    }
    Object[13] = 0LL;
    ExReleasePushLockExclusiveEx(Object + 12, 0LL);
    KeLeaveCriticalRegion();
  }
  return result;
}
