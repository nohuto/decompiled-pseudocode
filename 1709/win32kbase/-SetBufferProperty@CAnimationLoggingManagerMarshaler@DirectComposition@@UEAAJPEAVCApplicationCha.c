/*
 * XREFs of ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0142F00
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0027238 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C008B024 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0143194 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::SetBufferProperty(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        char *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // ebx
  int v10; // r8d
  char *v11; // r12
  int v12; // eax
  _QWORD *v13; // r11
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 *v18; // rdx
  size_t v19; // r8
  void *v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // xmm0_8
  int v24; // eax
  unsigned __int64 v25; // rdx
  _DWORD *v26; // rcx
  int v27; // ebx
  int v28; // edi
  int v29; // eax
  unsigned __int64 v31; // [rsp+20h] [rbp-30h] BYREF
  __int64 v32; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v33[4]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD Src[4]; // [rsp+40h] [rbp-10h] BYREF

  v6 = 0;
  if ( !a3 )
  {
    if ( a5 == 8 )
    {
      v25 = (unsigned int)(*(_DWORD *)a4 - 1);
      if ( *(_DWORD *)a4 && v25 < *((_QWORD *)a2 + 10) )
      {
        _mm_lfence();
        v26 = *(_DWORD **)(v25 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
      }
      else
      {
        v26 = 0LL;
      }
      if ( v26 )
      {
        v27 = v26[6];
        v28 = *((_DWORD *)a4 + 1);
        v29 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 16LL))(v26);
        Src[0] = v27;
        Src[2] = v29;
        Src[1] = v28;
        v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
               (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 40),
               1LL,
               0x6D6C4344u);
        if ( v6 >= 0 )
        {
          v18 = (__int64 *)Src;
          v19 = *((_QWORD *)this + 9);
          v20 = (void *)(*((_QWORD *)this + 5) + v19 * (*((_QWORD *)this + 8) - 1LL));
          goto LABEL_34;
        }
      }
      return (unsigned int)v6;
    }
    return (unsigned int)-1073741811;
  }
  v10 = a3 - 1;
  if ( !v10 )
  {
    if ( a5 == 12 )
    {
      v21 = (unsigned int)(*(_DWORD *)a4 - 1);
      if ( *(_DWORD *)a4 && v21 < *((_QWORD *)a2 + 10) )
      {
        _mm_lfence();
        v22 = *(_QWORD *)(v21 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
      }
      else
      {
        v22 = 0LL;
      }
      if ( v22 )
      {
        v23 = *(_QWORD *)a4;
        v33[2] = *((_DWORD *)a4 + 2);
        v24 = *(_DWORD *)(v22 + 24);
        v33[1] = HIDWORD(v23);
        v33[0] = v24;
        v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
               (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 88),
               1LL,
               0x6D6C4344u);
        if ( v6 >= 0 )
        {
          v18 = (__int64 *)v33;
          v19 = *((_QWORD *)this + 15);
          v20 = (void *)(*((_QWORD *)this + 11) + v19 * (*((_QWORD *)this + 14) - 1LL));
          goto LABEL_34;
        }
      }
      return (unsigned int)v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( v10 != 1 )
    return (unsigned int)-1073741811;
  if ( a5 <= 4 )
    return (unsigned int)-1073741811;
  v31 = 0LL;
  v11 = a4 + 4;
  v12 = StringCchLengthW((const unsigned __int16 *)a4 + 2, a5 - 4, &v31);
  v14 = ++v31;
  if ( v12 < 0 || a5 != 2 * v14 + 4 )
    return (unsigned int)-1073741811;
  v15 = (unsigned int)(*(_DWORD *)a4 - 1);
  if ( *(_DWORD *)a4 && v15 < v13[10] )
  {
    _mm_lfence();
    v14 = v31;
    v16 = *(_QWORD *)(v15 * v13[11] + v13[7]);
  }
  else
  {
    v16 = 0LL;
  }
  if ( v16 )
  {
    v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
           (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 136),
           1LL,
           0x6D6C4344u);
    if ( v6 >= 0 )
    {
      v17 = Win32AllocPoolWithQuota(2 * v14 + 16, 0x6D6C4344u);
      v32 = v17;
      if ( v17 )
      {
        *(_DWORD *)v17 = *(_DWORD *)(v16 + 24);
        *(_QWORD *)(v17 + 8) = v14;
        if ( (int)StringCchCopyW((char *)(v17 + 16), v14, v11) >= 0 )
        {
          v18 = &v32;
          v19 = *((_QWORD *)this + 21);
          v20 = (void *)(*((_QWORD *)this + 17) + v19 * (*((_QWORD *)this + 20) - 1LL));
LABEL_34:
          memmove(v20, v18, v19);
          *a6 = 1;
          return (unsigned int)v6;
        }
        return (unsigned int)-1073741811;
      }
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v6;
}
