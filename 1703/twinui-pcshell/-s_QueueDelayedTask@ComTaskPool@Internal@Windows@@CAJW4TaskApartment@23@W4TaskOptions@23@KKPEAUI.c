/*
 * XREFs of ?s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800212F0
 * Callers:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 * Callees:
 *     ??$Make@VCDelayedTaskLifetime@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDelayedTaskLifetime@ComTaskPool@Internal@Windows@@@12@XZ @ 0x180020ED0 (--$Make@VCDelayedTaskLifetime@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@YA-AV-$ComPt.c)
 *     ??$MakeAndInitialize@VCDelayedTask@ComTaskPool@Internal@Windows@@V1234@AEAW4TaskApartment@34@AEAW4TaskOptions@34@AEAKAEAKAEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@@012@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@AEAK3AEAPEAUIComPoolTask@56@@Z @ 0x1800211C8 (--$MakeAndInitialize@VCDelayedTask@ComTaskPool@Internal@Windows@@V1234@AEAW4TaskApartment@34@AEA.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::s_QueueDelayedTask(
        int a1,
        int a2,
        int a3,
        DWORD a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 *v6; // rsi
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  int v18; // [rsp+78h] [rbp+38h] BYREF
  int v19; // [rsp+80h] [rbp+40h] BYREF
  DWORD v20; // [rsp+88h] [rbp+48h] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  v6 = a6;
  if ( a6 )
    *a6 = 0LL;
  v7 = 0LL;
  if ( !v6 )
    goto LABEL_9;
  v8 = Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CDelayedTaskLifetime>(&v16);
  if ( &a6 != (__int64 **)v8 )
  {
    v7 = *v8;
    *v8 = 0LL;
  }
  v9 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v7 == 0 ? 0x8007000E : 0;
  if ( v7 )
  {
LABEL_9:
    a6 = 0LL;
    v11 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComTaskPool::CDelayedTask,Windows::Internal::ComTaskPool::CDelayedTask,enum Windows::Internal::TaskApartment &,enum Windows::Internal::TaskOptions &,unsigned long &,unsigned long &,Windows::Internal::IComPoolTask * &>(
            (__int64 *)&a6,
            &v17,
            &v18,
            &v19,
            &v20,
            &a5);
    v12 = (__int64)a6;
    v10 = v11;
    if ( v7 )
    {
      if ( *(__int64 **)(v7 + 16) != a6 )
      {
        v13 = (__int64)a6;
        if ( a6 )
        {
          (*(void (__fastcall **)(__int64 *))(*a6 + 8))(a6);
          v12 = (__int64)a6;
        }
        v14 = *(_QWORD *)(v7 + 16);
        *(_QWORD *)(v7 + 16) = v13;
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 16LL))(v14, v12);
          v12 = (__int64)a6;
        }
      }
      *v6 = v7;
    }
    if ( v12 )
    {
      a6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return v10;
}
