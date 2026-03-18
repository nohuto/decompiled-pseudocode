/*
 * XREFs of ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C00ECF8C
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00ECC20 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED06C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

void __fastcall MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS(struct _SPRITESTATE **this)
{
  struct _SPRITESTATE *v1; // r8
  __int64 v3; // rbx
  __int64 v4; // rax

  v1 = *this;
  if ( *this )
  {
    if ( *((_DWORD *)v1 + 17) )
    {
      v3 = 0LL;
      do
      {
        v4 = *(_QWORD *)(*((_QWORD *)v1 + 9) + 8 * v3);
        if ( *(_DWORD *)(v4 + 168) && (*(_DWORD *)(v4 + 32) & 0x20000) == 0 )
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v4 + 72), 0);
        v1 = *this;
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *((_DWORD *)*this + 17) );
    }
    else if ( *((_DWORD *)v1 + 24) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v1 + 32LL) & 0x20000) == 0 )
        vSpDirectDriverAccess(*this, 0);
    }
  }
}
