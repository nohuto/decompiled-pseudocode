/*
 * XREFs of ?PopulatePointerInfoProperties@PointerInfoAdapter@@AEAAXPEAUInputInfo@@PEAUPointer@@PEAUtagPOINTER_INFO_UNION@@@Z @ 0x180061688
 * Callers:
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1800618E0 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PointerInfoAdapter::PopulatePointerInfoProperties(
        PointerInfoAdapter *this,
        struct InputInfo *a2,
        struct Pointer *a3,
        struct tagPOINTER_INFO_UNION *a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  __int128 v9; // [rsp+0h] [rbp-40h]
  __int128 v10; // [rsp+10h] [rbp-30h]
  __int128 v11; // [rsp+20h] [rbp-20h]
  __int128 v12; // [rsp+30h] [rbp-10h]

  v4 = *((_QWORD *)a3 + 1);
  *((_QWORD *)a4 + 4) = v4;
  *((_QWORD *)a4 + 6) = v4;
  v5 = *((_QWORD *)a3 + 3);
  *((_QWORD *)a4 + 5) = v5;
  *((_QWORD *)a4 + 7) = v5;
  *((_DWORD *)a4 + 16) = *((_DWORD *)a2 + 2);
  *((_QWORD *)a4 + 10) = *((_QWORD *)a2 + 2);
  if ( (*(_BYTE *)a2 & 8) != 0 )
  {
    *(_DWORD *)a4 = 2;
  }
  else if ( (*(_BYTE *)a2 & 0x20) != 0 )
  {
    *(_DWORD *)a4 = 5;
  }
  else if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    *(_DWORD *)a4 = 4;
  }
  else
  {
    *(_DWORD *)a4 = (*(_BYTE *)a2 & 0x10 | 8u) >> 3;
  }
  *((_QWORD *)a4 + 2) = *((unsigned int *)a2 + 1);
  *((_QWORD *)a4 + 3) = 0LL;
  *((_DWORD *)a4 + 19) = 0;
  *(_QWORD *)((char *)a4 + 68) = 1LL;
  if ( (*(_DWORD *)a2 & 8) != 0 )
  {
    *((_QWORD *)a4 + 12) = 0LL;
    *(_OWORD *)((char *)a4 + 120) = 0LL;
    *((_QWORD *)a4 + 17) = 0LL;
    *((_DWORD *)a4 + 26) = *((_DWORD *)a3 + 2) - 1;
    *((_DWORD *)a4 + 28) = *((_DWORD *)a3 + 2) + 1;
    *((_DWORD *)a4 + 27) = *((_DWORD *)a3 + 3) - 1;
    *((_DWORD *)a4 + 29) = *((_DWORD *)a3 + 3) + 1;
  }
  else if ( (*(_DWORD *)a2 & 0x12) == 0x10 )
  {
    *((_QWORD *)a4 + 12) = 0LL;
    *((_QWORD *)a4 + 13) = 0LL;
    *((_QWORD *)a4 + 14) = 0LL;
  }
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a4 + 3);
  if ( (v6 & 2) != 0 )
  {
    v7 |= 0x14u;
    *((_DWORD *)a4 + 3) = v7;
    v6 = *((_DWORD *)a3 + 1);
  }
  if ( (v6 & 4) != 0 )
  {
    v7 |= 0x8000u;
    *((_DWORD *)a4 + 3) = v7;
  }
  v8 = v7 | 0x4000;
  *((_DWORD *)a4 + 3) = v8;
  v10 = *(_OWORD *)((char *)a2 + 408);
  v9 = *(_OWORD *)((char *)a2 + 392);
  v12 = *(_OWORD *)((char *)a2 + 440);
  v11 = *(_OWORD *)((char *)a2 + 424);
  if ( *(float *)&v9 != 1.0
    || *((float *)&v9 + 1) != 0.0
    || *((float *)&v9 + 2) != 0.0
    || *((float *)&v9 + 3) != 0.0
    || *(float *)&v10 != 0.0
    || *((float *)&v10 + 1) != 1.0
    || *((float *)&v10 + 2) != 0.0
    || *((float *)&v10 + 3) != 0.0
    || *(float *)&v11 != 0.0
    || *((float *)&v11 + 1) != 0.0
    || *((float *)&v11 + 2) != 1.0
    || *((float *)&v11 + 3) != 0.0
    || *(float *)&v12 != 0.0
    || *((float *)&v12 + 1) != 0.0
    || *((float *)&v12 + 2) != 0.0
    || *((float *)&v12 + 3) != 1.0 )
  {
    *((_DWORD *)a4 + 3) = v8 | 0x400000;
  }
}
