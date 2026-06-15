/*
 * XREFs of ?RegisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x18000E178
 * Callers:
 *     ?RegisterAppVolumePolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIAudioAppVolumePolicyChange@@@Z @ 0x180006160 (-RegisterAppVolumePolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIAudioAppVolumePolicyChange@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::RegisterAppVolumePolicyChange(
        CApplication *this,
        struct IAudioAppVolumePolicyChange *a2)
{
  unsigned int v4; // edi
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  ATL::CAtlException *v14; // rbx
  ATL::CAtlException *v15; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 0;
  try
  {
    v5 = *((_QWORD *)this + 15);
    if ( *((_QWORD *)this + 19) )
    {
LABEL_15:
      v10 = (__int64 *)*((_QWORD *)this + 19);
      v11 = *v10;
      if ( v10 )
        v10[2] = (__int64)a2;
      *((_QWORD *)this + 19) = v11;
      v10[1] = 0LL;
      *v10 = v5;
      ++*((_QWORD *)this + 17);
      v12 = *((_QWORD *)this + 15);
      if ( v12 )
        *(_QWORD *)(v12 + 8) = v10;
      else
        *((_QWORD *)this + 16) = v10;
      *((_QWORD *)this + 15) = v10;
      goto LABEL_29;
    }
    v6 = *((unsigned int *)this + 40);
    if ( *((_DWORD *)this + 40) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 0x18 )
        goto LABEL_9;
      v6 *= 24LL;
    }
    if ( ~v6 >= 8 )
    {
      v7 = malloc(v6 + 8);
      if ( !v7 )
        goto LABEL_11;
      *v7 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v7;
      goto LABEL_10;
    }
LABEL_9:
    v7 = 0LL;
LABEL_10:
    if ( !v7 )
LABEL_11:
      ATL::AtlThrowImpl(-2147024882);
    v8 = *((_DWORD *)this + 40);
    for ( i = &v7[2 * (v8 - 1) + 1 + (unsigned int)(v8 - 1)]; --v8 >= 0; i -= 3 )
    {
      *i = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = i;
    }
    goto LABEL_15;
  }
  catch ( ATL::CAtlException *v15 )
  {
    v14 = v15;
    if ( *(_DWORD *)v15 == -1073741571 )
      _o__resetstkoflw();
    v4 = *(_DWORD *)v14;
  }
LABEL_29:
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
