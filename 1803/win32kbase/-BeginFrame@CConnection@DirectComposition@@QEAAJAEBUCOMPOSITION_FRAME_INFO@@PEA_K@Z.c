/*
 * XREFs of ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0045FF0
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C0045BE0 (NtDCompositionBeginFrame.c)
 * Callees:
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C0046D34 (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@PEAW4DeferReason@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qpqxxq @ 0x1C00AEC08 (McTemplateK0qpqxxq.c)
 */

__int64 __fastcall DirectComposition::CConnection::BeginFrame(
        DirectComposition::CConnection *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r14
  bool v6; // zf
  struct _ERESOURCE *v7; // rbx
  BOOL v8; // edi
  signed int v9; // ebx
  __int64 *v10; // rcx
  PSLIST_ENTRY v11; // rcx
  PSLIST_ENTRY v12; // rdx
  PSLIST_ENTRY *v13; // r15
  _QWORD *v14; // rcx
  PSLIST_ENTRY v15; // rbx
  PSLIST_ENTRY *v16; // r12
  __int64 v17; // rax
  PSLIST_ENTRY v19; // rdi
  struct _SLIST_ENTRY *v20; // r14
  __int64 v21; // rdi
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rax
  struct _SLIST_ENTRY *Next; // r9
  _QWORD *p_Next; // r8
  struct _SLIST_ENTRY *v27; // rax
  PSLIST_ENTRY *v28; // rax
  struct _SLIST_ENTRY *v29; // [rsp+50h] [rbp-18h] BYREF
  __int64 v30; // [rsp+58h] [rbp-10h]
  int v31; // [rsp+B0h] [rbp+48h] BYREF
  int v32; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 *v33; // [rsp+C0h] [rbp+58h]
  __int64 *v34; // [rsp+C8h] [rbp+60h] BYREF

  v33 = a3;
  v3 = a3;
  v6 = PsGetCurrentProcess() == (_QWORD)g_pepDwm;
  *v3 = 0LL;
  v7 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  v8 = v6;
  DirectComposition::CConnection::s_capabilityInfo = *(_OWORD *)((char *)a2 + 28);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v7, 1u);
  if ( v8 && !DirectComposition::CConnection::s_pDwmRenderThread )
    DirectComposition::CConnection::s_pDwmRenderThread = KeGetCurrentThread();
  v9 = *((_DWORD *)this + 37) == 0 ? 0xC000020C : 0;
  if ( *((_DWORD *)this + 37) && !*((_QWORD *)this + 23) )
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 144LL))(*((_QWORD *)this + 31));
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct COMPOSITION_FRAME_INFO *, __int64 **))(**((_QWORD **)this + 31)
                                                                                              + 152LL))(
           *((_QWORD *)this + 31),
           a2,
           &v34);
    if ( v9 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 16LL))(*((_QWORD *)this + 31));
      v10 = v34;
      *((_QWORD *)this + 20) = *(_QWORD *)a2;
      v30 = (*(__int64 (__fastcall **)(__int64 *))(*v10 + 72))(v10);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 2, 0) )
      {
        v9 = -1073740024;
      }
      else
      {
        v11 = ExpInterlockedFlushSList((PSLIST_HEADER)this + 6);
        v12 = 0LL;
        if ( v11 )
        {
          do
          {
            v24 = *((_QWORD *)&v11[1].Next + 1);
            Next = v11->Next;
            if ( v24 )
            {
              p_Next = *(_QWORD **)(v24 + 24);
              *(_QWORD *)(v24 + 24) = 0LL;
              v11->Next = (struct _SLIST_ENTRY *)*((_QWORD *)&v11[1].Next + 1);
              *((_QWORD *)&v11[1].Next + 1) = 0LL;
            }
            else
            {
              p_Next = &v11->Next;
            }
            *p_Next = v12;
            v12 = v11;
            v11 = Next;
          }
          while ( Next );
        }
        v13 = (PSLIST_ENTRY *)((char *)this + 136);
        v29 = v12;
        v14 = (_QWORD *)*((_QWORD *)this + 17);
        if ( v14 )
        {
          do
          {
            *(_BYTE *)(v14[1] + 49LL) = 0;
            v28 = (PSLIST_ENTRY *)v14;
            v14 = (_QWORD *)*v14;
          }
          while ( v14 );
          v15 = *v13;
          *v13 = 0LL;
          *v28 = v12;
          v12 = v15;
          v29 = v15;
        }
        else
        {
          v15 = v12;
        }
        v16 = &v29;
        if ( v15 )
        {
          v19 = v15;
          do
          {
            v20 = v19[6].Next;
            if ( v20
              && BYTE1(v20[2].Next)
              && ((__int64)v19[2].Next & 0x10) != 0
              && (!DirectComposition::CBatch::ShouldDefer(
                     (DirectComposition::CBatch *)v19,
                     *((_QWORD *)this + 20),
                     0LL,
                     (enum DirectComposition::CBatch::DeferReason *)&v31)
               || v31 == 6) )
            {
              _InterlockedDecrement((volatile signed __int32 *)&v20[2].Next + 1);
              LOBYTE(v19[2].Next) &= ~0x10u;
            }
            v19 = v19->Next;
          }
          while ( v19 );
          v21 = v30;
          do
          {
            if ( DirectComposition::CBatch::ShouldDefer(
                   (DirectComposition::CBatch *)v15,
                   *((_QWORD *)this + 20),
                   *((struct DirectComposition::CEvent **)this + 10),
                   (enum DirectComposition::CBatch::DeferReason *)&v32) )
            {
              if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                McTemplateK0qpqxxq(
                  *((_QWORD *)&v15->Next + 1),
                  v22,
                  v23,
                  *(_DWORD *)(*((_QWORD *)&v15->Next + 1) + 28LL),
                  (char)v15,
                  (char)v15[1].Next,
                  (char)v15[4].Next,
                  *((_QWORD *)this + 20),
                  v32);
              *(_BYTE *)(*((_QWORD *)&v15->Next + 1) + 49LL) = 1;
              v27 = v15->Next;
              *((_QWORD *)&v15[3].Next + 1) = 0LL;
              *v16 = v27;
              *v13 = v15;
              v13 = &v15->Next;
              v15->Next = 0LL;
            }
            else
            {
              if ( ((__int64)v15[2].Next & 8) != 0 )
                *(_BYTE *)(*((_QWORD *)&v15->Next + 1) + 240LL) |= 0x80u;
              *((_QWORD *)&v15[3].Next + 1) = v21;
              v16 = &v15->Next;
            }
            v15 = *v16;
          }
          while ( *v16 );
          v12 = v29;
          v3 = v33;
        }
        *((_QWORD *)this + 21) = *((_QWORD *)a2 + 1);
        v9 = 0;
        *((_DWORD *)this + 44) = *((_DWORD *)a2 + 5);
        *((_DWORD *)this + 45) = *((_DWORD *)a2 + 6);
        if ( v12 )
          (*(void (__fastcall **)(__int64 *, struct _SLIST_ENTRY **))(*v34 + 56))(v34, &v12[7].Next + 1);
        (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 31) + 56LL))(*((_QWORD *)this + 31), v34);
        (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 23) + 16LL))(*((_QWORD *)this + 23), v34);
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 24LL))(*((_QWORD *)this + 31));
      v17 = *v34;
      if ( v9 < 0 )
        (*(void (**)(void))(v17 + 32))();
      else
        *v3 = (*(__int64 (**)(void))(v17 + 72))();
      (*(void (__fastcall **)(__int64 *))(*v34 + 8))(v34);
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
