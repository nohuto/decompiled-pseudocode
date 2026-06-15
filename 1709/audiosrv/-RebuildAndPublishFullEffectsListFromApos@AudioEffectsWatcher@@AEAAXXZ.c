/*
 * XREFs of ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x18000BBF0
 * Callers:
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x18000C0A4 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?EffectsChangedWaitCallback@AudioEffectsWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18006F890 (-EffectsChangedWaitCallback@AudioEffectsWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 * Callees:
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x18000BDB4 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x18001EFF0 (-GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x1800310A0 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos(AudioEffectsWatcher *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // ebp
  _DWORD *v4; // rsi
  CAPOWrapperClient **v5; // r14
  CAPOWrapperClient *v6; // rcx
  void *v7; // r9
  __int64 v8; // rax
  unsigned int *v9; // r8
  struct _GUID **v10; // rdx
  int (*v11)(CAPOWrapperClient *__hidden, struct _GUID **, unsigned int *, void *); // rax
  int v12; // eax
  unsigned __int64 v13; // rax
  char *v14; // r14
  unsigned int v15; // ebp
  _DWORD *v16; // rsi
  LPVOID *v17; // rdi
  void *v18; // r8
  SIZE_T v19; // rax
  unsigned __int64 v20; // kr00_8
  SIZE_T v21; // rsi
  void *v22; // rax
  unsigned __int64 v23; // rax
  __int128 v24; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v25[48]; // [rsp+58h] [rbp-50h] BYREF

  memset(v25, 0, sizeof(v25));
  v24 = *(_OWORD *)((char *)this + 8);
  EtwEventActivityIdControl(4LL, &v24);
  v2 = 0;
  do
  {
    ResetEvent(*((HANDLE *)this + 25));
    AudioEffectsWatcher::ReloadApos(this);
    *((_DWORD *)this + 56) = 0;
    v3 = 0;
    v4 = &v25[8];
    v5 = (CAPOWrapperClient **)((char *)this + 128);
    do
    {
      CoTaskMemFree(*((LPVOID *)v4 - 1));
      *((_QWORD *)v4 - 1) = 0LL;
      *v4 = 0;
      v6 = *v5;
      if ( *v5 )
      {
        v7 = (void *)*((_QWORD *)this + 25);
        v8 = 16LL * (int)v3;
        v9 = (unsigned int *)&v25[v8 + 8];
        v10 = (struct _GUID **)&v25[v8];
        v11 = *(int (**)(CAPOWrapperClient *__hidden, struct _GUID **, unsigned int *, void *))(*(_QWORD *)v6 + 24LL);
        v12 = v11 == CAPOWrapperClient::GetEffectsList
            ? CAPOWrapperClient::GetEffectsList(v6, v10, v9, v7)
            : ((__int64 (__fastcall *)(CAPOWrapperClient *, struct _GUID **, unsigned int *, void *))v11)(
                v6,
                v10,
                v9,
                v7);
        if ( v12 < 0 )
          *v4 = 0;
      }
      *((_DWORD *)this + 56) += *v4;
      ++v3;
      v5 += 4;
      v4 += 4;
    }
    while ( v3 < 3 );
  }
  while ( !WaitForSingleObject(*((HANDLE *)this + 25), 0) );
  v13 = *((unsigned int *)this + 56);
  if ( (_DWORD)v13 )
  {
    v18 = (void *)*((_QWORD *)this + 27);
    *((_QWORD *)this + 27) = 0LL;
    v20 = v13;
    v19 = 16 * v13;
    v21 = v19;
    if ( !is_mul_ok(v20, 0x10uLL) )
      goto LABEL_16;
    v22 = CoTaskMemRealloc(v18, v19);
    *((_QWORD *)this + 27) = v22;
    if ( !v22 )
      goto LABEL_16;
    v23 = CTCoAllocPolicy::_CoTaskMemSize(v22);
    if ( v23 > v21 )
      memset((void *)(v21 + *((_QWORD *)this + 27)), 0, v23 - v21);
  }
  v14 = (char *)*((_QWORD *)this + 27);
  v15 = 0;
  v16 = &v25[8];
  do
  {
    if ( *v16 )
    {
      memcpy_0(v14, *((const void **)v16 - 1), 16LL * (unsigned int)*v16);
      v14 += 16 * (unsigned int)*v16;
    }
    ++v15;
    v16 += 4;
  }
  while ( v15 < 3 );
  RtlPublishWnfStateData(
    *(_QWORD *)((char *)this + 92),
    0LL,
    *((_QWORD *)this + 27),
    (unsigned int)(16 * *((_DWORD *)this + 56)),
    0LL);
LABEL_16:
  v17 = (LPVOID *)v25;
  do
  {
    CoTaskMemFree(*v17);
    ++v2;
    v17 += 2;
  }
  while ( v2 < 3 );
  EtwEventActivityIdControl(4LL, &v24);
}
