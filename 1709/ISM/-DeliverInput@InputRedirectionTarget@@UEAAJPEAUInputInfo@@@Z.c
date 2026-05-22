/*
 * XREFs of ?DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800A7F10
 * Callers:
 *     ?DeliverInput@InputRedirectionTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x1800A80C0 (-DeliverInput@InputRedirectionTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionTarget::DeliverInput(InputRedirectionTarget *this, struct InputInfo *a2)
{
  int v2; // ebx
  char *v5; // rcx
  struct InputInfo *v6; // rax
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rdx
  __int128 v16; // xmm1
  HANDLE v17; // rax
  void *v18; // rbx
  int v20; // [rsp+30h] [rbp-B38h] BYREF
  char v21; // [rsp+38h] [rbp-B30h] BYREF

  v2 = 0;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      *((_QWORD *)a2 + 69) = *((_QWORD *)this + 7);
      v5 = &v21;
      v20 = 4;
      v6 = a2;
      v7 = 22LL;
      do
      {
        v8 = *((_OWORD *)v6 + 1);
        *(_OWORD *)v5 = *(_OWORD *)v6;
        v9 = *((_OWORD *)v6 + 2);
        *((_OWORD *)v5 + 1) = v8;
        v10 = *((_OWORD *)v6 + 3);
        *((_OWORD *)v5 + 2) = v9;
        v11 = *((_OWORD *)v6 + 4);
        *((_OWORD *)v5 + 3) = v10;
        v12 = *((_OWORD *)v6 + 5);
        *((_OWORD *)v5 + 4) = v11;
        v13 = *((_OWORD *)v6 + 6);
        *((_OWORD *)v5 + 5) = v12;
        v14 = *((_OWORD *)v6 + 7);
        v6 = (struct InputInfo *)((char *)v6 + 128);
        *((_OWORD *)v5 + 6) = v13;
        v5 += 128;
        *((_OWORD *)v5 - 1) = v14;
        --v7;
      }
      while ( v7 );
      v15 = *((_QWORD *)this + 5);
      v16 = *((_OWORD *)v6 + 1);
      *(_OWORD *)v5 = *(_OWORD *)v6;
      *((_OWORD *)v5 + 1) = v16;
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, int))(**((_QWORD **)this + 4) + 152LL))(
             *((_QWORD *)this + 4),
             v15,
             4LL,
             &v20,
             2856);
      if ( v2 < 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 144LL))(
          *((_QWORD *)this + 4),
          *((_QWORD *)this + 5));
        *((_QWORD *)this + 5) = 0LL;
        v2 = 0;
      }
    }
    if ( !*((_QWORD *)this + 5) )
    {
      if ( *((_BYTE *)a2 + 688) )
      {
        v17 = OpenEventW(2u, 0, L"Touch_Test_Sync_Event");
        v18 = v17;
        if ( v17 )
        {
          SetEvent(v17);
          CloseHandle(v18);
        }
      }
      return 0;
    }
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 183, 87);
  }
  return (unsigned int)v2;
}
