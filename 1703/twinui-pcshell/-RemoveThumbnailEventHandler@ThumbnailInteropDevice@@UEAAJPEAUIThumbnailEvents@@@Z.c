/*
 * XREFs of ?RemoveThumbnailEventHandler@ThumbnailInteropDevice@@UEAAJPEAUIThumbnailEvents@@@Z @ 0x180166C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ThumbnailInteropDevice::RemoveThumbnailEventHandler(
        ThumbnailInteropDevice *this,
        struct IThumbnailEvents *a2,
        __int64 a3,
        const char *a4)
{
  struct IThumbnailEvents **v6; // rdi
  struct IThumbnailEvents **i; // rbx
  struct IThumbnailEvents **j; // r14
  struct IThumbnailEvents *v9; // rdx
  struct IThumbnailEvents **v10; // rax
  struct IThumbnailEvents *v11; // rcx
  struct IThumbnailEvents **v12; // r14
  struct IThumbnailEvents *v13; // rax
  struct IThumbnailEvents *v14; // rcx
  struct IThumbnailEvents **v15; // r14
  struct IThumbnailEvents **k; // rdi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IThumbnailEvents *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = (struct IThumbnailEvents **)*((_QWORD *)this + 4);
    for ( i = (struct IThumbnailEvents **)*((_QWORD *)this + 3); i != v6 && *i != a2; ++i )
      ;
    if ( i != v6 )
    {
      for ( j = i + 1; j != v6; ++j )
      {
        v9 = *j;
        if ( *j != a2 )
        {
          v10 = i++;
          *j = 0LL;
          v11 = *v10;
          *v10 = v9;
          if ( v11 )
            (*(void (__fastcall **)(struct IThumbnailEvents *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      if ( i != v6 )
      {
        v12 = (struct IThumbnailEvents **)*((_QWORD *)this + 4);
        while ( v6 != v12 )
        {
          v13 = *v6;
          *v6 = 0LL;
          v14 = *i;
          *i = v13;
          if ( v14 )
            (*(void (__fastcall **)(struct IThumbnailEvents *))(*(_QWORD *)v14 + 16LL))(v14);
          ++i;
          ++v6;
        }
        v15 = (struct IThumbnailEvents **)*((_QWORD *)this + 4);
        for ( k = i; k != v15; ++k )
        {
          if ( *k )
            (*(void (__fastcall **)(struct IThumbnailEvents *))(*(_QWORD *)*k + 16LL))(*k);
        }
        *((_QWORD *)this + 4) = i;
      }
    }
    if ( a2 )
      (*(void (__fastcall **)(struct IThumbnailEvents *))(*(_QWORD *)a2 + 16LL))(a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x70,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\device.cpp",
                           a4);
  }
  return result;
}
