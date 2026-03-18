/*
 * XREFs of ACPIEnumerateTables @ 0x1C0093B08
 * Callers:
 *     ACPIEnumMapTableHandler @ 0x1C0001E80 (ACPIEnumMapTableHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIEnumerateTables(_DWORD *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rax
  int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  _DWORD **v9; // r9
  __int64 v10; // r10
  _DWORD *v11; // rax

  v4 = 0;
  v5 = (_DWORD *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  if ( v5 && (v7 = *v5) != 0 )
  {
    v8 = 4 * v7;
    if ( a2 )
    {
      if ( *a2 < v8 )
      {
        *a2 = v8;
        return (unsigned int)-1073741789;
      }
      else
      {
        if ( v7 )
        {
          v9 = (_DWORD **)(v5 + 2);
          v10 = v7;
          do
          {
            v11 = *v9++;
            *a1++ = *v11;
            --v10;
          }
          while ( v10 );
        }
        *a2 = v8;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      6,
      30,
      (__int64)&WPP_2260554ba3bf3834a501608aef56474b_Traceguids);
    return (unsigned int)-1072431079;
  }
  return v4;
}
