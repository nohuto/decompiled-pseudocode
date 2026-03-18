/*
 * XREFs of _GetRegisteredRawInputDevices @ 0x1C01B67D8
 * Callers:
 *     NtUserGetRegisteredRawInputDevices @ 0x1C01E6C60 (NtUserGetRegisteredRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C01B60E4 (-SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z.c)
 */

__int64 __fastcall GetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rdi
  unsigned int v6; // ebx
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 CurrentProcessWin32Process; // r13
  _QWORD *v12; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  _QWORD *v15; // rcx
  _QWORD *k; // rax
  ULONG64 v17; // rcx
  unsigned int *v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  unsigned int v21; // ecx
  __int64 *v22; // r8
  __int64 v23; // r11
  int v24; // edx
  int v25; // eax
  __int16 v26; // r10
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rdx
  int v30; // eax
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rdx
  __int128 v35; // [rsp+28h] [rbp-B0h]
  __int128 v36; // [rsp+58h] [rbp-80h]
  unsigned __int64 v37; // [rsp+68h] [rbp-70h]

  v4 = a2;
  v6 = 0;
  v7 = 0;
  EnterDeviceInfoListCrit_(a1, a2, a3, a4);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  v12 = *(_QWORD **)(CurrentProcessWin32Process + 784);
  if ( v12 )
  {
    for ( i = (_QWORD *)v12[2]; i != v12 + 2; i = (_QWORD *)*i )
      ++v7;
    v9 = (__int64)(v12 + 4);
    for ( j = (_QWORD *)v12[4]; j != (_QWORD *)v9; j = (_QWORD *)*j )
      ++v7;
    v15 = v12 + 6;
    for ( k = (_QWORD *)v12[6]; k != v15; k = (_QWORD *)*k )
      ++v7;
  }
  if ( a1 )
  {
    v18 = v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v18 = (unsigned int *)MmUserProbeAddress;
    v19 = *v18;
    if ( (_DWORD)v19 )
    {
      ProbeForWrite(a1, 16 * v19, 4u);
      v20 = *(_QWORD *)(CurrentProcessWin32Process + 784);
      if ( v20 )
      {
        if ( (unsigned int)v19 >= v7 )
        {
          v21 = 0;
          v22 = *(__int64 **)(v20 + 16);
          while ( 1 )
          {
            v23 = *(_QWORD *)(CurrentProcessWin32Process + 784);
            if ( v22 == (__int64 *)(v23 + 16) || v21 >= (unsigned int)v19 )
              break;
            v24 = 0;
            DWORD1(v35) = 0;
            v25 = *((_DWORD *)v22 + 5);
            if ( (v25 & 1) != 0 )
            {
              v24 = (v25 & 2) != 0 ? 4096 : 256;
              DWORD1(v35) = v24;
            }
            v26 = *((_WORD *)v22 + 9);
            v27 = (__int64 *)v22[4];
            if ( v27 )
              v28 = *v27;
            else
              v28 = 0LL;
            *((_QWORD *)&v35 + 1) = v28;
            if ( *((_WORD *)v22 + 8) == 1 )
            {
              if ( v26 == 6 && (*(_DWORD *)(v23 + 100) & 0x20) != 0 || v26 == 2 && (*(_DWORD *)(v23 + 100) & 2) != 0 )
              {
                v24 |= 0x30u;
                DWORD1(v35) = v24;
              }
              if ( v26 == 6 && (*(_DWORD *)(v23 + 100) & 0x200) != 0 )
              {
                v24 |= 0x200u;
                DWORD1(v35) = v24;
              }
              if ( v26 == 6 && (*(_DWORD *)(v23 + 100) & 0x400) != 0 )
              {
                v24 |= 0x400u;
                DWORD1(v35) = v24;
              }
              if ( v26 == 2 && (*(_DWORD *)(v23 + 100) & 0x100) != 0 )
                DWORD1(v35) = v24 | 0x200;
            }
            LODWORD(v35) = *((_DWORD *)v22 + 4);
            *((_OWORD *)a1 + v21) = v35;
            v22 = (__int64 *)*v22;
            ++v21;
          }
          v29 = *(__int64 **)(v23 + 32);
          while ( v29 != (__int64 *)(*(_QWORD *)(CurrentProcessWin32Process + 784) + 32LL) && v21 < (unsigned int)v19 )
          {
            DWORD1(v36) = 32;
            v30 = *((_DWORD *)v29 + 5);
            if ( (v30 & 1) != 0 )
              DWORD1(v36) = (v30 & 2) != 0 ? 4128 : 288;
            v31 = (__int64 *)v29[4];
            if ( v31 )
              v32 = *v31;
            else
              v32 = 0LL;
            *((_QWORD *)&v36 + 1) = v32;
            LODWORD(v36) = *((_DWORD *)v29 + 4);
            *((_OWORD *)a1 + v21) = v36;
            v29 = (__int64 *)*v29;
            ++v21;
          }
          v33 = *(__int64 **)(*(_QWORD *)(CurrentProcessWin32Process + 784) + 48LL);
          while ( v33 != (__int64 *)(*(_QWORD *)(CurrentProcessWin32Process + 784) + 48LL) && v21 < (unsigned int)v19 )
          {
            HIDWORD(v37) = 16;
            LODWORD(v37) = *((_DWORD *)v33 + 4);
            *((_OWORD *)a1 + v21) = v37;
            v33 = (__int64 *)*v33;
            ++v21;
          }
          SortRegisteredDevices(a1, v7);
          v6 = v7;
        }
        else
        {
          if ( (unsigned __int64)v4 >= MmUserProbeAddress )
            v4 = (unsigned int *)MmUserProbeAddress;
          *v4 = v7;
          v6 = -1;
          UserSetLastError(122LL, v9);
        }
      }
    }
    else
    {
      v6 = -1;
      UserSetLastError(87LL, v9);
    }
  }
  else
  {
    v17 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    *v4 = v7;
  }
  LeaveDeviceInfoListCrit_(v17, v9, v10);
  return v6;
}
