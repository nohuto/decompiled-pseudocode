/*
 * XREFs of ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x1800676AC
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x180022894 (--0InputSystem@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z.c)
 *     ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x1800663B0 (--0EdgyControllerClientProxy@@QEAA@AEBV-$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z.c)
 *     ??0EdgyProcessor@@QEAA@XZ @ 0x1800B2F78 (--0EdgyProcessor@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

struct EdgyConnection *EdgyConnection::Get(void)
{
  struct EdgyConnection *result; // rax
  struct EdgyConnection *v1; // rax
  struct EdgyConnection *v2; // rbx
  struct EdgyConnection *v3; // rcx

  result = (struct EdgyConnection *)EdgyConnection::s_spThis;
  if ( !EdgyConnection::s_spThis )
  {
    v1 = (struct EdgyConnection *)malloc(0x60uLL);
    v2 = v1;
    if ( v1 )
    {
      memset_0(v1, 0, 0x60uLL);
      *(_QWORD *)v2 = &RefCountedObject::`vftable';
      *(_QWORD *)v2 = &EdgyConnection::`vftable';
      *((_DWORD *)v2 + 2) = 1;
      *((_QWORD *)v2 + 2) = 0LL;
      *((_QWORD *)v2 + 3) = 0LL;
      *((_QWORD *)v2 + 4) = 0LL;
      *((_QWORD *)v2 + 5) = 0LL;
      *((_QWORD *)v2 + 6) = 0LL;
      *((_QWORD *)v2 + 7) = 0LL;
      *((_QWORD *)v2 + 8) = 0LL;
      *((_QWORD *)v2 + 9) = 0LL;
      *((_QWORD *)v2 + 10) = 0LL;
      *((_QWORD *)v2 + 11) = 0LL;
    }
    else
    {
      v2 = 0LL;
    }
    result = (struct EdgyConnection *)EdgyConnection::s_spThis;
    if ( (struct EdgyConnection *)EdgyConnection::s_spThis != v2 )
    {
      if ( v2 )
      {
        (*(void (__fastcall **)(struct EdgyConnection *))(*(_QWORD *)v2 + 8LL))(v2);
        result = (struct EdgyConnection *)EdgyConnection::s_spThis;
      }
      v3 = result;
      EdgyConnection::s_spThis = (__int64)v2;
      result = v2;
      if ( v3 )
      {
        (*(void (__fastcall **)(struct EdgyConnection *))(*(_QWORD *)v3 + 16LL))(v3);
        return (struct EdgyConnection *)EdgyConnection::s_spThis;
      }
    }
  }
  return result;
}
