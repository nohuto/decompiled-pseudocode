/*
 * XREFs of MiRebuildPageTableLeafAges @ 0x140125A40
 * Callers:
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiSetVaAge @ 0x140125600 (MiSetVaAge.c)
 *     MiTerminateWsle @ 0x14012B31C (MiTerminateWsle.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

unsigned __int64 __fastcall MiRebuildPageTableLeafAges(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 *v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int8 v10; // cl
  int v11; // edx
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  char v24; // r8^7
  unsigned __int64 v25; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v26[8]; // [rsp+28h] [rbp-50h] BYREF

  v2 = (a2 >> 18) & 0x3FFFFFF8;
  v3 = *(_QWORD *)(v2 - 0x904C0000000LL);
  v4 = v2 - 0x904C0000000LL;
  if ( (unsigned __int64)(v2 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
    && v4 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 8 * ((v4 >> 3) & 0x1FF));
      v16 = v3 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v16 = *(_QWORD *)(v2 - 0x904C0000000LL);
      v3 = v16;
      if ( (v15 & 0x42) != 0 )
        v3 = v16 | 0x42;
    }
  }
  v25 = v3;
  if ( (unsigned __int64)&v25 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v25 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v17 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 8 * (((unsigned __int64)&v25 >> 3) & 0x1FF));
      v19 = v3 | 0x20;
      if ( (v18 & 0x20) == 0 )
        v19 = v3;
      v3 = v19;
      if ( (v18 & 0x42) != 0 )
        v3 = v19 | 0x42;
    }
  }
  v5 = (__int64 *)(48 * ((v3 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  v6 = *v5;
  result = (unsigned __int64)*v5 >> 4;
  if ( (result & 0x3FF) != 0 )
    return result;
  v9 = (__int64)(v4 << 25) >> 16;
  memset(v26, 0, sizeof(v26));
  do
  {
    v8 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v8 & 1) == 0 )
        goto LABEL_10;
      if ( (v8 & 0x20) == 0 || (v8 & 0x42) == 0 )
      {
        v20 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v20 )
        {
          v21 = *(_QWORD *)(v20 + 8 * ((v9 >> 3) & 0x1FF));
          LOBYTE(v20) = v8 | 0x20;
          if ( (v21 & 0x20) == 0 )
            v20 = *(_QWORD *)v9;
          LOBYTE(v8) = v20;
          if ( (v21 & 0x42) != 0 )
            LOBYTE(v8) = v20 | 0x42;
        }
      }
    }
    if ( (v8 & 1) != 0 )
    {
      v12 = ((((__int64)(v9 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
      v13 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 8 * ((v12 >> 3) & 0x1FF));
          v24 = HIBYTE(*(_QWORD *)v12);
          if ( (v23 & 0x20) == 0 )
            v24 = HIBYTE(v13);
          HIBYTE(v13) = v24;
          if ( (v23 & 0x42) != 0 )
            HIBYTE(v13) = v24;
        }
      }
      if ( (unsigned __int8)((HIBYTE(v13) & 0xF) - 8) > 2u )
        ++v26[HIBYTE(v13) & 0xF];
    }
LABEL_10:
    v9 += 8LL;
  }
  while ( (v9 & 0xFFF) != 0 );
  v10 = 8;
  while ( 1 )
  {
    result = --v10;
    v11 = v26[v10];
    if ( v11 )
      break;
    if ( !v10 )
      return result;
  }
  result = v6 & 0xFFFFFFFFFFFE000FuLL | (16 * (v11 & 0x3FF | ((unsigned __int64)(v10 & 7) << 10)));
  *v5 = result;
  return result;
}
