/*
 * XREFs of _GetRegisteredRawInputDevices @ 0x1C01B3868
 * Callers:
 *     NtUserGetRegisteredRawInputDevices @ 0x1C01DAA00 (NtUserGetRegisteredRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C01B3134 (-SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z.c)
 */

__int64 __fastcall GetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  __int64 CurrentProcessWin32Process; // r13
  _QWORD *v10; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  _QWORD *k; // rax
  unsigned int *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 *v18; // r8
  __int64 v19; // r11
  int v20; // edx
  int v21; // eax
  __int16 v22; // r10
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rdx
  int v26; // eax
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rdx
  __int128 v31; // [rsp+28h] [rbp-B0h]
  __int128 v32; // [rsp+58h] [rbp-80h]
  unsigned __int64 v33; // [rsp+68h] [rbp-70h]

  v4 = 0;
  v5 = 0;
  EnterDeviceInfoListCrit_(a1);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6);
  v10 = *(_QWORD **)(CurrentProcessWin32Process + 776);
  if ( v10 )
  {
    for ( i = (_QWORD *)v10[2]; i != v10 + 2; i = (_QWORD *)*i )
      ++v5;
    for ( j = (_QWORD *)v10[4]; j != v10 + 4; j = (_QWORD *)*j )
      ++v5;
    v8 = v10 + 6;
    for ( k = (_QWORD *)v10[6]; k != v8; k = (_QWORD *)*k )
      ++v5;
  }
  if ( a1 )
  {
    v14 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v14 = (unsigned int *)W32UserProbeAddress;
    v15 = *v14;
    if ( (_DWORD)v15 )
    {
      ProbeForWrite(a1, 16 * v15, 4u);
      v16 = *(_QWORD *)(CurrentProcessWin32Process + 776);
      if ( v16 )
      {
        if ( (unsigned int)v15 >= v5 )
        {
          v17 = 0;
          v18 = *(__int64 **)(v16 + 16);
          while ( 1 )
          {
            v19 = *(_QWORD *)(CurrentProcessWin32Process + 776);
            if ( v18 == (__int64 *)(v19 + 16) || v17 >= (unsigned int)v15 )
              break;
            v20 = 0;
            DWORD1(v31) = 0;
            v21 = *((_DWORD *)v18 + 5);
            if ( (v21 & 1) != 0 )
            {
              v20 = (v21 & 2) != 0 ? 4096 : 256;
              DWORD1(v31) = v20;
            }
            v22 = *((_WORD *)v18 + 9);
            v23 = (__int64 *)v18[4];
            if ( v23 )
              v24 = *v23;
            else
              v24 = 0LL;
            *((_QWORD *)&v31 + 1) = v24;
            if ( *((_WORD *)v18 + 8) == 1 )
            {
              if ( v22 == 6 && (*(_DWORD *)(v19 + 100) & 0x20) != 0 || v22 == 2 && (*(_DWORD *)(v19 + 100) & 2) != 0 )
              {
                v20 |= 0x30u;
                DWORD1(v31) = v20;
              }
              if ( v22 == 6 && (*(_DWORD *)(v19 + 100) & 0x200) != 0 )
              {
                v20 |= 0x200u;
                DWORD1(v31) = v20;
              }
              if ( v22 == 6 && (*(_DWORD *)(v19 + 100) & 0x400) != 0 )
              {
                v20 |= 0x400u;
                DWORD1(v31) = v20;
              }
              if ( v22 == 2 && (*(_DWORD *)(v19 + 100) & 0x100) != 0 )
                DWORD1(v31) = v20 | 0x200;
            }
            LODWORD(v31) = *((_DWORD *)v18 + 4);
            *((_OWORD *)a1 + v17) = v31;
            v18 = (__int64 *)*v18;
            ++v17;
          }
          v25 = *(__int64 **)(v19 + 32);
          while ( v25 != (__int64 *)(*(_QWORD *)(CurrentProcessWin32Process + 776) + 32LL) && v17 < (unsigned int)v15 )
          {
            DWORD1(v32) = 32;
            v26 = *((_DWORD *)v25 + 5);
            if ( (v26 & 1) != 0 )
              DWORD1(v32) = ((v26 & 2) != 0 ? 4096 : 256) | 0x20;
            v27 = (__int64 *)v25[4];
            if ( v27 )
              v28 = *v27;
            else
              v28 = 0LL;
            *((_QWORD *)&v32 + 1) = v28;
            LODWORD(v32) = *((_DWORD *)v25 + 4);
            *((_OWORD *)a1 + v17) = v32;
            v25 = (__int64 *)*v25;
            ++v17;
          }
          v29 = *(__int64 **)(*(_QWORD *)(CurrentProcessWin32Process + 776) + 48LL);
          while ( v29 != (__int64 *)(*(_QWORD *)(CurrentProcessWin32Process + 776) + 48LL) && v17 < (unsigned int)v15 )
          {
            HIDWORD(v33) = 16;
            LODWORD(v33) = *((_DWORD *)v29 + 4);
            *((_OWORD *)a1 + v17) = v33;
            v29 = (__int64 *)*v29;
            ++v17;
          }
          SortRegisteredDevices(a1, v5);
          v4 = v5;
        }
        else
        {
          if ( (unsigned __int64)a2 >= W32UserProbeAddress )
            a2 = (unsigned int *)W32UserProbeAddress;
          *a2 = v5;
          v4 = -1;
          UserSetLastError(122LL);
        }
      }
    }
    else
    {
      v4 = -1;
      UserSetLastError(87LL);
    }
  }
  else
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (unsigned int *)W32UserProbeAddress;
    *a2 = v5;
  }
  LeaveDeviceInfoListCrit_(v8);
  return v4;
}
