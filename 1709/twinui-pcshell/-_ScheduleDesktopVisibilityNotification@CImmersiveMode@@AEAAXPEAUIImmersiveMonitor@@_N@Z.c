/*
 * XREFs of ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x1800338E4
 * Callers:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x18003366C (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180024508 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_32debc2fc80ca1e0059f85a00ba9919c___ @ 0x180034200 (Windows--Internal--ComTaskPool--QueueTask__lambda_32debc2fc80ca1e0059f85a00ba9919c___.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveMode::_ScheduleDesktopVisibilityNotification(
        CImmersiveMode *this,
        struct IImmersiveMonitor *a2,
        char a3)
{
  unsigned __int64 v6; // r14
  char *v7; // rax
  char *v8; // rdi
  unsigned __int64 v9; // r8
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int128 v12; // rax
  unsigned __int64 v13; // kr00_8
  __int64 v14; // rbx
  __int64 v15; // rdx
  _DWORD *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct IImmersiveMonitor *v19; // [rsp+38h] [rbp-28h] BYREF
  char v20; // [rsp+40h] [rbp-20h]
  __int64 v21; // [rsp+48h] [rbp-18h]
  char *v22; // [rsp+50h] [rbp-10h]
  void *v23; // [rsp+90h] [rbp+30h] BYREF
  char *v24; // [rsp+A8h] [rbp+48h]

  v6 = *((_QWORD *)this + 52);
  if ( v6 )
  {
    v7 = (char *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      memset(v7 + 8, 0, 0x20uLL);
      *((_QWORD *)v8 + 1) = 0LL;
      *((_QWORD *)v8 + 2) = 0LL;
      *((_QWORD *)v8 + 3) = 0LL;
      *((_QWORD *)v8 + 4) = 0LL;
      *(_QWORD *)v8 = &CRefCountedObject<CCoSimpleArray<unsigned long,4294967294,CSimpleArrayStandardCompareHelper<unsigned long>>>::`vftable';
      *((_DWORD *)v8 + 10) = 0;
    }
    else
    {
      v8 = 0LL;
    }
    v24 = v8;
    if ( !v8 )
      goto LABEL_36;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v6 > 0xFFFFFFFE )
      goto LABEL_36;
    v9 = *((_QWORD *)v8 + 4);
    if ( v6 <= v9 )
      goto LABEL_18;
    v10 = v9 * (unsigned __int128)2uLL;
    if ( is_mul_ok(v9, 2uLL) )
    {
      v11 = v9 + 4096;
      if ( v9 <= 0x1000 )
        v11 = 2 * v9;
      if ( v6 > v11 )
        v11 = v6;
      if ( v11 > 0xFFFFFFFE )
        v11 = 4294967294LL;
      v23 = (void *)(*((_QWORD *)&v10 + 1) & (unsigned __int64)v23);
      v13 = (unsigned int)(DWORD2(v10) + 4);
      v12 = v11 * (unsigned __int128)(unsigned int)(DWORD2(v10) + 4);
      if ( is_mul_ok(v11, v13)
        && (int)CTCoAllocPolicy::Realloc((IMalloc *)&v23, *((__int64 *)&v12 + 1), *((void **)v8 + 1), v12, &v23) >= 0 )
      {
        *((_QWORD *)v8 + 4) = v11;
        *((_QWORD *)v8 + 1) = v23;
LABEL_18:
        v14 = 0LL;
        v15 = 0LL;
        while ( 1 )
        {
          v16 = *(_DWORD **)(*((_QWORD *)this + 51) + 8 * v15);
          if ( !a2 )
            break;
          if ( v16[1] == 1 )
            goto LABEL_23;
LABEL_24:
          if ( ++v15 >= v6 )
          {
            if ( v14 )
            {
              v23 = a2;
              if ( a2 )
                (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
              v19 = a2;
              if ( a2 )
                (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
              v20 = a3;
              v21 = v14;
              v22 = v8;
              (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8);
              Windows::Internal::ComTaskPool::QueueTask__lambda_32debc2fc80ca1e0059f85a00ba9919c___(
                v18,
                v17,
                LODWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr),
                &v19);
              if ( v22 )
                (*(void (__fastcall **)(char *))(*(_QWORD *)v22 + 16LL))(v22);
              if ( v19 )
                (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v19 + 16LL))(v19);
              if ( a2 )
                (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 16LL))(a2);
            }
            goto LABEL_36;
          }
        }
        if ( v16[1] )
          goto LABEL_24;
LABEL_23:
        *(_DWORD *)(*((_QWORD *)v8 + 1) + 4 * v14++) = *v16;
        goto LABEL_24;
      }
    }
LABEL_36:
    if ( v8 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16LL))(v8);
  }
}
