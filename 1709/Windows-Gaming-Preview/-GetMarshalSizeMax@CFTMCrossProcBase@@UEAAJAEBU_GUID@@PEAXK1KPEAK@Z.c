/*
 * XREFs of ?GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x180040290
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004064C (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcBase::GetMarshalSizeMax(
        CFTMCrossProcBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rsi
  signed int FTM; // ebx
  _QWORD *v13; // rax
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // eax
  void *v19; // rcx
  void *v21; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  v21 = 0LL;
  *a7 = 0;
  FTM = CFTMCrossProcBase::_GetFTM((LPUNKNOWN)this, a2, &v21);
  if ( FTM >= 0 )
  {
    FTM = (*(__int64 (__fastcall **)(void *, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int *))(*(_QWORD *)v21 + 32LL))(
            v21,
            a2,
            a3,
            a4,
            a5,
            a6,
            v7);
    if ( FTM >= 0 && a4 != 3 )
    {
      v13 = (_QWORD *)(*(__int64 (__fastcall **)(CFTMCrossProcBase *))(*(_QWORD *)this + 88LL))(this);
      if ( *(_QWORD *)&GUID_NULL.Data1 != *v13 || *(_QWORD *)GUID_NULL.Data4 != v13[1] )
      {
        FTM = (*(__int64 (__fastcall **)(CFTMCrossProcBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int **))(*(_QWORD *)this + 72LL))(
                this,
                a2,
                a3,
                a4,
                a5,
                a6,
                &a7);
        if ( FTM >= 0 )
        {
          v14 = -1;
          _InterlockedExchange((volatile __int32 *)this + 8, (__int32)a7);
          v15 = *((_DWORD *)this + 8);
          v16 = -1;
          v17 = v15 + 4;
          if ( v15 + 4 >= v15 )
            v16 = v15 + 4;
          FTM = v17 < v15 ? 0x80070216 : 0;
          if ( v17 >= v15 )
          {
            v18 = *v7 + v16;
            if ( v18 >= *v7 )
              v14 = *v7 + v16;
            FTM = v18 < *v7 ? 0x80070216 : 0;
            *v7 = v14;
          }
        }
      }
    }
  }
  v19 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)FTM;
}
