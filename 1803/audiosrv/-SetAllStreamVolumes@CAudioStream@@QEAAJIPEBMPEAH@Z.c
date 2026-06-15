/*
 * XREFs of ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x180004124
 * Callers:
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z @ 0x180003D40 (-SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18002E010 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 */

__int64 __fastcall CAudioStream::SetAllStreamVolumes(float **this, unsigned int a2, float *a3, int *a4)
{
  __int64 v5; // rdi
  int v8; // ebx
  unsigned int v9; // eax
  float *v10; // rcx
  int v11; // ebp
  float *v12; // rax
  __int64 v13; // rcx
  char *v14; // r14
  float v15; // xmm1_4
  __int64 (__fastcall *v16)(CAudioStream *__hidden, bool, __int64); // rax
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v19 = a2;
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids, this);
  }
  if ( (_DWORD)v5 != *((_DWORD *)this + 23) )
  {
    v18 = 1466LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL,
      v19);
    return 2147942487LL;
  }
  v8 = 0;
  v9 = 0;
  if ( (_DWORD)v5 )
  {
    v10 = a3;
    while ( *v10 >= 0.0 && *v10 <= 1.0 )
    {
      ++v9;
      ++v10;
      if ( v9 >= (unsigned int)v5 )
        goto LABEL_9;
    }
    v18 = 1470LL;
    goto LABEL_24;
  }
LABEL_9:
  v11 = 0;
  if ( (_DWORD)v5 )
  {
    v12 = this[14];
    v13 = v5;
    v14 = (char *)((char *)a3 - (char *)v12);
    do
    {
      v15 = *(float *)((char *)v12 + (_QWORD)v14);
      if ( *v12 != v15 )
      {
        *v12 = v15;
        ++v11;
      }
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  v16 = (__int64 (__fastcall *)(CAudioStream *__hidden, bool, __int64))*((_QWORD *)*this + 15);
  if ( v16 == CAudioStream::RecalculateVolume )
    CAudioStream::RecalculateVolume((CAudioStream *)this, 0, 0LL);
  else
    v16((CAudioStream *)this, 0, 0LL);
  if ( a4 )
  {
    LOBYTE(v8) = v11 == 0;
    *a4 = v8;
  }
  return 0LL;
}
