/*
 * XREFs of ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1800B3F20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x180068EF8 (-GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@.c)
 *     ?GetOrientationBias@EdgyProcessorTarget@@AEBA?AW4OrientationBias@@XZ @ 0x1800B4138 (-GetOrientationBias@EdgyProcessorTarget@@AEBA-AW4OrientationBias@@XZ.c)
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1800B41B8 (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1800B45EC (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     ?GestureRecognizerReadConfigValue@@YAJW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x1800DBDEC (-GestureRecognizerReadConfigValue@@YAJW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerCon.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnTouchInfo(EdgyProcessorTarget *this, struct TouchInfo *a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  int OrientationBias; // eax
  __int64 v8; // rdx
  unsigned int v9; // eax
  EdgyImpl *v10; // rcx
  int v11; // eax
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF
  char v14; // [rsp+60h] [rbp+18h] BYREF
  __int16 v15; // [rsp+64h] [rbp+1Ch]

  v4 = 0;
  v13 = 0;
  if ( (a2->Flags & 0x400) != 0 )
  {
    *((_DWORD *)this + 6) = 1;
    *((_DWORD *)this + 16) = -1;
    *(_QWORD *)((char *)this + 68) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    v5 = *((_QWORD *)this + 12);
LABEL_32:
    EdgyImpl::Reset((EdgyImpl *)(v5 + 64));
    return (unsigned int)v4;
  }
  if ( (a2->Flags & 1) != 0 && *((_DWORD *)this + 36) != 2 )
  {
    if ( !*((_WORD *)this + 14) )
    {
      v4 = GestureRecognizerReadConfigValue(3LL, &v14);
      if ( v4 >= 0 )
        *((_WORD *)this + 14) = v15;
    }
    if ( v4 < 0 )
      return (unsigned int)v4;
    *((_DWORD *)this + 16) = -1;
    *(_QWORD *)((char *)this + 68) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    v6 = *((_QWORD *)this + 12);
    *((_DWORD *)this + 6) = 1;
    if ( Edges::GetCandidate(
           (Edges *)(*(_QWORD *)(v6 + 88) + 72LL),
           *(const struct CandidateIdentity ***)(v6 + 64),
           0LL,
           0LL,
           0LL) )
    {
      *((_DWORD *)this + 6) = 0;
      OrientationBias = EdgyProcessorTarget::GetOrientationBias((char *)this - 8);
      if ( OrientationBias == 1 )
      {
        v8 = 288LL;
      }
      else
      {
        v8 = 304LL;
        if ( OrientationBias == 2 )
          v8 = 272LL;
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), v8);
      if ( v4 >= 0 )
      {
        v9 = EdgyProcessorTarget::GetOrientationBias((char *)this - 8);
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 16) + 56LL))(*((_QWORD *)this + 16), v9);
        if ( v4 >= 0 )
          v4 = 0;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
      *((_DWORD *)this + 8) = a2->TimeStamp + *((unsigned __int16 *)this + 14);
    }
  }
  if ( a2->TimeStamp < *((_DWORD *)this + 8) )
    goto LABEL_22;
  if ( !*((_DWORD *)this + 6) )
  {
    v10 = (EdgyImpl *)(*((_QWORD *)this + 12) + 64LL);
    *((_DWORD *)this + 6) = 1;
    EdgyImpl::Reset(v10);
LABEL_22:
    if ( !*((_DWORD *)this + 6) )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, struct TouchInfo *))(**((_QWORD **)this + 16) + 32LL))(
             *((_QWORD *)this + 16),
             a2);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 16) + 64LL))(
             *((_QWORD *)this + 16),
             &v13);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v4 = EdgyProcessorTarget::OnGestureUpdate((char *)this - 8, v13);
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
  }
  if ( (a2->Flags & 4) != 0 )
  {
    v11 = *((_DWORD *)this + 6);
    if ( !v11 || v11 == 3 )
    {
      *((_DWORD *)this + 6) = 1;
      v11 = 1;
    }
    if ( v11 == 1 )
    {
      *((_DWORD *)this + 16) = -1;
      *(_QWORD *)((char *)this + 68) = 0LL;
      *((_QWORD *)this + 10) = 0LL;
      v5 = *((_QWORD *)this + 12);
      goto LABEL_32;
    }
  }
  return (unsigned int)v4;
}
