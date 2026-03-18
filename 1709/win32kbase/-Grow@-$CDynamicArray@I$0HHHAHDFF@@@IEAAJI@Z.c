/*
 * XREFs of ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0143A24
 * Callers:
 *     ?CapturePointer@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I@Z @ 0x1C01439D0 (-CapturePointer@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall CDynamicArray<unsigned int,2003858261>::Grow(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v3; // ebx
  void *v4; // rax
  void *v5; // rbp

  v1 = -1;
  if ( *(_DWORD *)(a1 + 8) != -1 )
    v1 = *(_DWORD *)(a1 + 8) + 1;
  v3 = *(_DWORD *)(a1 + 8) == -1 ? 0xC0000095 : 0;
  if ( *(_DWORD *)(a1 + 8) != -1 && v1 > *(_DWORD *)(a1 + 12) )
  {
    v3 = 0;
    if ( is_mul_ok(v1, 4uLL) )
    {
      v4 = (void *)Win32AllocPool(4LL * v1, 0x77707355u);
      v5 = v4;
      if ( v4 )
      {
        if ( *(_QWORD *)a1 )
        {
          memmove(v4, *(const void **)a1, 4LL * *(unsigned int *)(a1 + 8));
          Win32FreePool(*(_QWORD *)a1);
        }
        *(_QWORD *)a1 = v5;
        *(_DWORD *)(a1 + 12) = v1;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  return v3;
}
